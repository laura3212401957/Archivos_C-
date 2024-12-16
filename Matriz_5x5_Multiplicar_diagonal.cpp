#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];

    // Leer los valores de la matriz
    cout << "Ingresa los valores para una matriz 5x5:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar la matriz ingresada
    cout << "\nLa matriz ingresada es:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Multiplicar cada elemento de la diagonal principal por 5 y mostrar el resultado
    cout << "\nResultado de multiplicar los elementos de la diagonal principal por 5:" << endl;
    for (int i = 0; i < 5; i++) {
        int resultado = matriz[i][i] * 5;
        cout << "Elemento [" << i << "][" << i << "] * 5 = " << resultado << endl;
    }

    return 0;
}
