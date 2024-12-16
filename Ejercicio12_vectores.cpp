#include <iostream>
using namespace std;

int main() {
    float calificaciones[5];
    float porcentajes[5];
    float suma = 0;

    for (int i = 0; i < 5; i++) {
        while (true) {
            cout << "Ingrese la calificación (entre 1.0 y 5.0): ";
            cin >> calificaciones[i];
            if (calificaciones[i] >= 1.0 && calificaciones[i] <= 5.0) {
                break; // Salir del bucle si la calificación es válida
            } else {
                cout << "Calificación no válida. Intente nuevamente." << endl;
            }
        }
        porcentajes[i] = calificaciones[i] * 0.2; // Multiplicando por el 20%
        suma += porcentajes[i];
    }

    // Calcular el promedio
    float promedio = suma / 5;

    // Mostrar resultados
    cout << "Calificaciones: ";
    for (int i = 0; i < 5; i++) {
        cout << calificaciones[i] << " ";
    }
    cout << endl;

    cout << "Porcentajes: ";
    for (int i = 0; i < 5; i++) {
        cout << porcentajes[i] << " ";
    }
    cout << endl;

    cout << "Promedio de porcentajes: " << promedio << endl;

    return 0;
}
