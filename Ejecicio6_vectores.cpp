#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma = 0, resta = 0, multiplicacion = 1;
    double division = 1.0;

    // Leer 10 números
    for (int i = 0; i < 10; ++i) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
        multiplicacion *= numeros[i];
    }
    
    // Realizar la resta y la división
    resta = numeros[0];
    for (int i = 1; i < 10; ++i) {
        resta -= numeros[i];
    }
    for (int i = 1; i < 10; ++i) {
        division /= numeros[i];
    }

    // Mostrar resultados
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;
    cout << "División: " << division << endl;

    return 0;
}
