#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de libros: ";
    cin >> N;
    cin.ignore(); // Limpiar el buffer

    string titulos[N];
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el título del libro " << i + 1 << ": ";
        getline(cin, titulos[i]);
    }

    // Mostrar los títulos
    cout << "Títulos de libros ingresados: " << endl;
    for (int i = 0; i < N; i++) {
        cout << titulos[i] << endl;
    }

    char buscar;
    cout << "¿Desea buscar un libro? (s/n): ";
    cin >> buscar;

    if (buscar == 's' || buscar == 'S') {
        string libroBuscado;
        cout << "Ingrese el título del libro a buscar: ";
        cin.ignore(); // Limpiar el buffer
        getline(cin, libroBuscado);

        // Buscar el libro
        for (int i = 0; i < N; i++) {
            if (titulos[i] == libroBuscado) {
                cout << "El libro se encuentra en la posición: " << i << endl;
                return 0; // Salir del programa si se encuentra el libro
            }
        }
        cout << "El libro no se encuentra en la lista." << endl;
    }

    return 0;
}
