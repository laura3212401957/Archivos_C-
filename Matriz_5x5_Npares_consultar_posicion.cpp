#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];
    int par = 2;

    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = par;
            par += 2;
        }
    }

    
    cout << "Matriz de números pares:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    
    int x, y;
    cout << "\nIngrese la posición X, Y para consultar (0-4): ";
    cin >> x >> y;

    if (x >= 0 && x < 5 && y >= 0 && y < 5) {
        cout << "El número en la posición [" << x << "][" << y << "] es: " << matriz[x][y] << endl;
    } else {
        cout << "Posición fuera de rango.\n";
    }

    return 0;
}
