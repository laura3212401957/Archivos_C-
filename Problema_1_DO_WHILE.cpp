#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, promedio;
    char respuesta;

    do {
        cout << "Ingrese la primera nota: ";
        cin >> nota1;
        cout << "Ingrese la segunda nota: ";
        cin >> nota2;
        cout << "Ingrese la tercera nota: ";
        cin >> nota3;

        promedio = (nota1 + nota2 + nota3) / 3;

        if (promedio >= 7)
            cout << "Promocionado" << endl;
        else if (promedio >= 4)
            cout << "Regular" << endl;
        else
            cout << "Reprobado" << endl;

        cout << "¿Desea calcular el promedio de otro estudiante? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}

