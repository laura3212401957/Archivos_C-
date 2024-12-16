#include <iostream>
using namespace std;

int main() {
    int matriz[2][2], traspuesta[2][2];

    cout << "Ingrese los elementos de una matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            traspuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nLa matriz traspuesta es:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << traspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
