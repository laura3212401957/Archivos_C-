#include <iostream>

using namespace std;

int main() {
    const int TAMANO = 10; 
    double vectorA[TAMANO], vectorB[TAMANO];
    double k;

    
    cout << "Ingrese los elementos del vector A (distintos de cero):" << endl;
    for (int i = 0; i < TAMANO; i++) {
        do {
            cin >> vectorA[i];
            if (vectorA[i] == 0) {
                cout << "Error: El elemento no puede ser cero. Ingrese nuevamente: ";
            }
        } while (vectorA[i] == 0);
    }

    
    cout << "Ingrese el valor de k: ";
    cin >> k;

    
    for (int i = 0; i < TAMANO; i++) {
        vectorB[i] = vectorA[i] / k;
    }

    cout << "Vector A:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << vectorA[i] << " ";
    }
    cout << endl;

    cout << "Vector B:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << vectorB[i] << " ";
    }
    cout << endl;

    return 0;
}
