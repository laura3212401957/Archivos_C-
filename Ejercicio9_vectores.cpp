#include <iostream>
using namespace std;

int main() {
    int vector1[5], vector2[5], vectorTotal[10];

    // Leer 5 números para el primer vector
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese el número " << (i + 1) << " para el primer vector: ";
        cin >> vector1[i];
        vectorTotal[i] = vector1[i]; // Copiar al vector total
    }

    // Leer 5 números para el segundo vector
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese el número " << (i + 1) << " para el segundo vector: ";
        cin >> vector2[i];
        vectorTotal[i + 5] = vector2[i]; // Copiar al vector total
    }

    // Mostrar todos los números en el vector total
    cout << "Todos los números: ";
    for (int i = 0; i < 10; ++i) {
        cout << vectorTotal[i] << " ";
    }
    cout << endl;

    return 0;
}
