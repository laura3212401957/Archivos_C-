#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;

    do {
        cout << "Ingrese un número: ";
        cin >> num;

        suma += num;

        if (suma > 300) {
            cout << "La suma se ha pasado de 300. Ingrese nuevamente." << endl;
            suma -= num; // Restar el número ingresado para volver a estar debajo de 300
        }
    } while (suma < 300);

    cout << "Ha completado la suma de 300 exactos." << endl;

    return 0;
}

