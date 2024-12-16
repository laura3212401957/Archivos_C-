#include <iostream>
#include <locale>
using namespace std;

int main()
{
    float matriz[3][3];
    float sumaFilas[3] = {0};
    float sumaColumnas[3] = {0};
    float sumaTotal = 0;
    float numero;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Posicion [" << i << "] [" << j << "]: ";
            cin >> numero;
            matriz[i][j] = numero;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sumaFilas[i] += matriz[i][j];
        }
    }


    for (i = 0; i < 3; i++) {
        cout << "Suma de la fila " << i << ": " << sumaFilas[i] << "\n";
        sumaTotal += sumaFilas[i]; 
    }

    
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            sumaColumnas[j] += matriz[i][j];
        }
    }


    for (j = 0; j < 3; j++) {
        cout << "Suma de la columna " << j << ": " << sumaColumnas[j] << "\n";
        sumaTotal += sumaColumnas[j];
    }


    cout << "Suma total de todas las filas y columnas: " << sumaTotal << "\n";

    return 0;
}
