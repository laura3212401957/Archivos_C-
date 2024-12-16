#include <iostream>
using namespace std;

int main() {
    int numeros[7], copia[7], ordenado[7];

    // Leer 7 números
    for (int i = 0; i < 7; ++i) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
        copia[i] = numeros[i] * 2; // Multiplicar por 2
    }

    // Ordenar la copia usando el método de burbuja
    for (int i = 0; i < 7; ++i) {
        ordenado[i] = copia[i];
    }
    
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7 - i - 1; ++j) {
            if (ordenado[j] > ordenado[j + 1]) {
                int temp = ordenado[j];
                ordenado[j] = ordenado[j + 1];
                ordenado[j + 1] = temp;
            }
        }
    }

    // Mostrar todos los números ordenados
    cout << "Números ordenados: ";
    for (int i = 0; i < 7; ++i) {
        cout << ordenado[i] << " ";
    }
    cout << endl;

    return 0;
}
