#include <iostream>

using namespace std;

int main() {
    const int TAMANO = 10;
    int numeros[TAMANO];

    
    cout << "Ingrese 10 números enteros negativos:\n";
    for (int i = 0; i < TAMANO; i++) {
        do {
            cin >> numeros[i];
        } while (numeros[i] >= 0);
    }

    
    for (int i = 0; i < TAMANO - 1; i++) {
        for (int j = 0; j < TAMANO - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                swap(numeros[j], numeros[j + 1]);
            }
        }
    }

    
    cout << "Vector ordenado:\n";
    for (int i = 0; i < TAMANO; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    
    int N, i, j;
    cout << "Ingrese el número a buscar (N), la posición inicial (i) y la posición final (j): ";
    cin >> N >> i >> j;

    bool encontrado = false;
    for (int k = i; k <= j; k++) {
        if (numeros[k] == N) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El número " << N << " se encuentra entre las posiciones " << i << " y " << j << " del vector." << endl;
    } else {
        cout << "El número " << N << " no se encuentra entre las posiciones " << i << " y " << j << " del vector." << endl;
    }

    return 0;
}
