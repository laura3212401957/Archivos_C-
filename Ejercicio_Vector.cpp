#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    int vector[N];
    int numero, suma = 0;

    // Leer y validar los números enteros
    for (int i = 0; i < N; ++i) {
        cout << "Ingrese un número entero para la posición " << i + 1 << ": ";
        while (!(cin >> numero)) {
            cin.clear(); // Limpia el estado de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora el resto de la línea
            cout << "Entrada inválida. Ingrese un número entero: ";
        }
        vector[i] = numero;
    }

    // Calcular la suma y el promedio
    for (int i = 0; i < N; ++i) {
        suma += vector[i];
    }
    double promedio = static_cast<double>(suma) / N;

    // Contar elementos mayores y menores o iguales al promedio
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
    cout << "Cantidad de números mayores al promedio: " << mayores << endl;
    cout << "Cantidad de números menores o iguales al promedio: " << menoresIguales << endl;

    return 0;
}
