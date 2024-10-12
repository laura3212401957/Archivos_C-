#include <iostream>
using namespace std;

int main() {
    int totalPreguntas, correctas;
    float porcentaje;

    for (int i = 1; i <= 20; i++) {
        
        cout << "Postulante " << i << endl;
        cout << "Ingrese el total de preguntas: ";
        cin >> totalPreguntas;
        cout << "Ingrese la cantidad de respuestas correctas: ";
        cin >> correctas;

      
        porcentaje = (float)correctas / totalPreguntas * 100;

      
        if (porcentaje >= 90) {
            cout << "Nivel Máximo" << endl;
        } else if (porcentaje >= 75) {
            cout << "Nivel Medio" << endl;
        } else if (porcentaje >= 50) {
            cout << "Nivel Regular" << endl;
        } else {
            cout << "Fuera de Nivel" << endl;
        }
    }

    return 0;
}

