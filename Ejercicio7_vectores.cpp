#include <iostream>
using namespace std;

int main() {
    int numeros[20];
    int numeroBuscado;
    bool encontrado = false;

    // Rellenar el vector con 20 números
    for (int i = 0; i < 20; ++i) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> numeroBuscado;

    // Buscar el número
    for (int i = 0; i < 20; ++i) {
        if (numeros[i] == numeroBuscado) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El número " << numeroBuscado << " fue encontrado." << endl;
    } else {
        cout << "El número " << numeroBuscado << " no fue encontrado." << endl;
    }

    return 0;
}
