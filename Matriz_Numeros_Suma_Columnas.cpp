#include <iostream>
using namespace std;

int main() {
    int matriz[10][10], sumaColumnas[10] = {0};

    int numero = 1;
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = numero++;
            sumaColumnas[j] += matriz[i][j];
        }
    }

    
    cout << "Matriz 10x10 con suma de columnas:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSumas de las columnas:\n";
    for (int j = 0; j < 10; j++) {
        cout << sumaColumnas[j] << "\t";
    }
    cout << endl;

    return 0;
}
