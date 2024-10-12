#include <iostream>
using namespace std;

int main() {
    int totalPreguntas, correctas;
    float porcentaje;

    for (int i = 1; i <= 20; i++) {
        cout << "Encuesta " << i << endl;
        cout << "Ingrese la cantidad total de preguntas: ";
        cin >> totalPreguntas;
        cout << "Ingrese la cantidad de respuestas correctas: ";
        cin >> correctas;

        porcentaje = (correctas * 100.0) / totalPreguntas;

        if (porcentaje >= 90)
            cout << "Nivel máximo" << endl;
        else if (porcentaje >= 75)
            cout << "Nivel medio" << endl;
        else if (porcentaje >= 50)
            cout << "Nivel regular" << endl;
        else
            cout << "Fuera de nivel" << endl;
    }

    return 0;
}

