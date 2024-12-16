#include <iostream>
using namespace std;

int main() {
    char frase[51];  // Arreglo para almacenar la frase de hasta 50 caracteres (+1 para el terminador de cadena '\0')
    int palabras = 1, vocales = 0, consonantes = 0;

    cout << "Ingrese una frase de máximo 50 caracteres: ";
    cin.getline(frase, 51);

    // Recorrer cada carácter de la frase
    for (int i = 0; frase[i] != '\0'; ++i) {
        char c = frase[i];

        // Contar vocales
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            ++vocales;
        }
        // Contar consonantes (letras que no son vocales y son alfabéticas)
        else if ((c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z')) {
            ++consonantes;
        }
        // Contar palabras (cada vez que aparece un espacio seguido de una letra)
        if (c == ' ' && frase[i + 1] != ' ' && frase[i + 1] != '\0') {
            ++palabras;
        }
    }

    cout << "Palabras: " << palabras << endl;
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;

    return 0;
}
