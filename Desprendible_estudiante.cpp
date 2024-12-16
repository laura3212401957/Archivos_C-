#include <iostream>
using namespace std;

int main() {
    const int NUM_MATERIAS = 5;
    string materias[NUM_MATERIAS] = {"Matemáticas", "Ciencias", "Historia", "Lenguaje", "Arte"};
    float calificaciones[NUM_MATERIAS];
    float suma = 0.0;

    for (int i = 0; i < NUM_MATERIAS; ++i) {
        cout << "Ingrese la calificación para " << materias[i] << " (entre 1.0 y 5.0): ";
        while (!(cin >> calificaciones[i]) || calificaciones[i] < 1.0 || calificaciones[i] > 5.0) {
            cout << "Entrada inválida. Ingrese una calificación entre 1.0 y 5.0: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        suma += calificaciones[i];
    }


    float promedio = suma / NUM_MATERIAS;


    cout << "\nBoleta de Calificaciones:\n";
    for (int i = 0; i < NUM_MATERIAS; ++i) {
        cout << materias[i] << ": " << calificaciones[i] << endl;
    }
    cout << "Promedio: " << promedio << endl;

    return 0;
}
