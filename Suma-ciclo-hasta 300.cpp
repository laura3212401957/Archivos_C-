#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;


    while (suma < 300) {
        cout << "Ingrese un n�mero: ";
        cin >> numero;

        if (suma + numero > 300) 
		{
            cout << "No puede sumar m�s de 300. Intente nuevamente." << endl;
        } else {
            suma += numero;
        }
    }

    cout << "Suma final: " << suma << endl;

    return 0;
}

