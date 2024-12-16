#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    int vector[N];
    int suma = 0;
    double promedio;

    for (int i = 0; i < N; ++i) {
        cout << "Ingrese un numero entero para la posicion " << i + 1 << ": ";
        while (!(cin >> vector[i])) {
            cout << "Entrada invalida. Ingrese un numero entero: ";
            cin >> vector[i];
        }
    }

    // Calcular la suma y el promedio
    for (int i = 0; i < N; ++i) {
        suma += vector[i];
    }

    promedio = suma / static_cast<double>(N);  // Aquí el cambio principal

    // Cuenta los mayores y menores o iguales al promedio
    int mayores = 0, menoresIguales = 0;
    for (int i = 0; i < N; ++i) {
        if (vector[i] > promedio) {
            mayores++;
        } else {
            menoresIguales++;
        }
    }

    // Mostrar resultados
    cout << "Vector ingresado: ";
    for (int i = 0; i < N; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;

    cout << "Promedio: " << promedio << endl;
    cout << "Cantidad de numeros mayores al promedio: " << mayores << endl;
    cout << "Cantidad de numeros menores o iguales al promedio: " << menoresIguales << endl;

    return 0;
}