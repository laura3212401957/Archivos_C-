#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de ciudades: ";
    cin >> N;

    float temperaturas[N];
    float suma = 0, menor, mayor;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese la temperatura de la ciudad " << i + 1 << ": ";
        cin >> temperaturas[i];
        suma += temperaturas[i];

        // Determinar menor y mayor
        if (i == 0) {
            menor = mayor = temperaturas[i];
        } else {
            if (temperaturas[i] < menor) {
                menor = temperaturas[i];
            }
            if (temperaturas[i] > mayor) {
                mayor = temperaturas[i];
            }
        }
    }

    // Calcular promedio
    float promedio = suma / N;

    // Ordenar temperaturas (usando el método de burbuja)
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (temperaturas[j] > temperaturas[j + 1]) {
                float temp = temperaturas[j];
                temperaturas[j] = temperaturas[j + 1];
                temperaturas[j + 1] = temp;
            }
        }
    }

    // Mostrar resultados
    cout << "Temperaturas ingresadas: ";
    for (int i = 0; i < N; i++) {
        cout << temperaturas[i] << " ";
    }
    cout << endl;

    cout << "Temperaturas ordenadas: ";
    for (int i = 0; i < N; i++) {
        cout << temperaturas[i] << " ";
    }
    cout << endl;

    cout << "Temperatura menor: " << menor << endl;
    cout << "Temperatura mayor: " << mayor << endl;
    cout << "Promedio de temperaturas: " << promedio << endl;

    return 0;
}
