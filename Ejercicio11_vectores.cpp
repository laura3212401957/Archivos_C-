#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    int numeros[N];
    int suma = 0;
    int contadorMayor = 0, contadorMenorIgual = 0;

    for (int i = 0; i < N; i++) {
        while (true) {
            cout << "Ingrese un número entero: ";
            if (cin >> numeros[i]) {
                break; // Salir del bucle si se ingresa un número entero
            } else {
                cout << "Entrada no válida. Intente nuevamente." << endl;
                cin.clear(); // Limpiar el estado de error
                cin.ignore(10000, '\n'); // Ignorar la entrada incorrecta
            }
        }
        suma += numeros[i];
    }

    float promedio = static_cast<float>(suma) / N;

    // Contar elementos mayores y menores o iguales al promedio
    for (int i = 0; i < N; i++) {
        if (numeros[i] > promedio) {
            contadorMayor++;
        } else {
            contadorMenorIgual++;
        }
    }

    // Mostrar resultados
    cout << "Datos ingresados: ";
    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Cantidad de números mayores al promedio: " << contadorMayor << endl;
    cout << "Cantidad de números menores o iguales al promedio: " << contadorMenorIgual << endl;

    return 0;
}
