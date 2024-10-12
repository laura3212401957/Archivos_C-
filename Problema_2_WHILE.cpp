#include <iostream>
using namespace std;

int main() {
    int totalPreguntas, correctas, encuesta = 1;
    float porcentaje;

    while (encuesta <= 20) {
        cout << "Encuesta " << encuesta << endl;
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

        encuesta++;
    }

    return 0;
}

