#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    float calificaciones[n], porcentajes[n], suma = 0, promedio;

    // Lectura y validación de calificaciones
    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese la calificación " << i + 1 << " (entre 1.0 y 5.0): ";
            cin >> calificaciones[i];
            if (calificaciones[i] < 1.0 || calificaciones[i] > 5.0) {
                cout << "Error: la calificación debe estar entre 1.0 y 5.0." << endl;
            }
        } while (calificaciones[i] < 1.0 || calificaciones[i] > 5.0);
    }

    // Cálculo de porcentajes y promedio
    for (int i = 0; i < n; i++) {
        porcentajes[i] = calificaciones[i] * 0.20;
        suma += porcentajes[i];
    }
    promedio = suma / n;

    // Mostrar resultados
    cout << "\nCalificaciones y porcentajes:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Calificacion " << i + 1 << ": " << calificaciones[i] 
             << " -> 20%: " << porcentajes[i] << endl;
    }
    cout << "Promedio de porcentajes: " << promedio << endl;

    return 0;
}
