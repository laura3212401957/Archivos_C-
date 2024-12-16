#include <iostream>

using namespace std;

int main() {
    const double DESCUENTO_PORCENTAJE = 0.1; 
    const double LIMITE_DESCUENTO = 300000; 

    int n;
    double monto, total = 0;

    cout << "Ingrese la cantidad de compras: ";
    cin >> n;

    double compras[n]; 

    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese el monto de la compra " << i + 1 << ": ";
            cin >> monto;
            if (monto < 0) {
                cout << "Monto inválido. Ingrese un monto positivo." << endl;
            }
        } while (monto < 0);

        compras[i] = monto;
        total += monto;
    }

    cout << "\nDetalle de las compras:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Compra " << i + 1 << ": $" << compras[i] << endl;
    }

    cout << "\nTotal de las compras: $" << total << endl;

    if (total > LIMITE_DESCUENTO) {
        double descuento = total * DESCUENTO_PORCENTAJE;
        total -= descuento;
        cout << "Se aplica un descuento del 10%: $" << descuento << endl;
        cout << "Total a pagar: $" << total << endl;
    } else {
        cout << "No se aplica descuento." << endl;
    }

    return 0;
}
