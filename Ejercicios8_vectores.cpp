#include <iostream>
using namespace std;

int main() {
    char cadena[100];
    
    cout << "Ingrese una cadena: ";
    cin >> cadena;

    // Encriptar la cadena sumando 3 al código ASCII de cada carácter
    for (int i = 0; cadena[i] != '\0'; ++i) {
        cadena[i] += 3; // Sumar 3 al código ASCII
    }

    cout << "Cadena encriptada: " << cadena << endl;

    return 0;
}
