#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> N;

    int edades[N], anios[N];
    float sueldos[N], formula[N];
    float totalNomina = 0;

    for (int i = 0; i < N; i++) {
        while (true) {
            cout << "Ingrese la edad del empleado " << i + 1 << ": ";
            cin >> edades[i];
            if (edades[i] >= 0) {
                break;
            } else {
                cout << "La edad no puede ser negativa. Intente nuevamente." << endl;
            }
        }

        while (true) {
            cout << "Ingrese los años en la compañía del empleado " << i + 1 << ": ";
            cin >> anios[i];
            if (anios[i] >= 0) {
                break;
            } else {
                cout << "Los años no pueden ser negativos. Intente nuevamente." << endl;
            }
        }

        // Calcular el sueldo
        int sumaAnios = (anios[i] * (anios[i] + 1)) / 2; // Suma de 1 + 2 + ... + años
        sueldos[i] = 100 + edades[i] + (sumaAnios * 15000);
        formula[i] = sueldos[i];

        totalNomina += sueldos[i];
    }

    // Mostrar resultados
    cout << "Sueldos de los empleados: ";
    for (int i = 0; i < N; i++) {
        cout << sueldos[i] << " ";
    }
    cout << endl;

    cout << "Fórmula aplicada: ";
    for (int i = 0; i < N; i++) {
        cout << formula[i] << " ";
    }
    cout << endl;

    cout << "Suma total de la nómina mensual: " << totalNomina * 2 << endl; // Multiplicamos por 2 para quincenal

    return 0;
}
