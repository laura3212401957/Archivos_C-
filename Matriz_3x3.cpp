#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int matriz[3][3];
    float suma[3] = {0};
    float sumacolumnas[3]={0};
    int numero;
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

    // Sumar las filas de la matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            suma[i] += matriz[i][j];
        }
    }
    // Mostrar la suma de las filas
    for (i = 0; i < 3; i++) {
        cout << "Suma de las fila " << i << ": " << suma[i] << "\n";
    }
    
 //sumar las columnas de la matriz
     for (j = 0; j < 3; j++) {
        for (j = 0; j < 3; j++) {
            sumacolumnas[j] += matriz[i][j];
        }
    }

// Mostrar la suma de las columnas
    for (j = 0; j < 3; j++) {
        cout << "Suma de las columnas " << j << ": " << sumacolumnas[j] << "\n";
    }
    return 0;
}
