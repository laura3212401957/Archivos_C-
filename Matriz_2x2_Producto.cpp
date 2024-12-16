#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2], matriz2[2][2], producto[2][2] = {0};

    cout << "Ingrese los elementos de la primera matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\nIngrese los elementos de la segunda matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "\nEl producto de las matrices es:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
