#include <iostream>

using namespace std;

int main() {
    const int costo_atraccion = 8000;
    const int costo_10_atracciones = 53000;
    const int costo_pasaporte_gold = 93000;
    const int costo_zona_infantes = 24000;

    int opcion, num_atracciones, edad_bebe;
    int total, dinero;
    char continuar;

    cout << "Bienvenido al parque de diversiones" << endl;

    do {
        cout << "1. Boleto para 10 atracciones ($53.000)" << endl;
        cout << "2. Pasaporte Gold (Acceso ilimitado $93.000)" << endl;
        cout << "3. Pagar por atracciones individuales ($8.000 cada una)" << endl;
        cout << "4. Zona de infantes (Para beb�s menores de 2 a�os, $24.000)" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

       
        total = 0;

        switch (opcion) {
            case 1:
                total = costo_10_atracciones;
                cout << "Seleccionaste el boleto para 10 atracciones." << endl;
                break;
            case 2:
                total = costo_pasaporte_gold;
                cout << "Seleccionaste el Pasaporte Gold." << endl;
                break;
            case 3:
                cout << "�Cu�ntas atracciones vas a disfrutar? ";
                cin >> num_atracciones;
                total = num_atracciones * costo_atraccion;
                cout << "Seleccionaste pagar por " << num_atracciones << " atracciones." << endl;
                break;
            case 4:
                cout << "Ingresa la edad del beb�: ";
                cin >> edad_bebe;
                if (edad_bebe < 2) {
                    total = costo_zona_infantes;
                    cout << "El beb� tiene acceso a la zona de infantes." << endl;
                } else {
                    cout << "El beb� no es elegible para la zona de infantes." << endl;
                    continue; 
                }
                break;
            default:
                cout << "Opci�n inv�lida." << endl;
                continue; 
        }

        cout << "El total a pagar es: $" << total << endl;
        cout << "Ingrese el dinero con el que va a pagar: ";
        cin >> dinero;

        if (dinero >= total) {
            int vueltas = dinero - total;
            cout << "Pago realizado con �xito. Sus vueltas son: $" << vueltas << endl;
        } else {
            cout << "Dinero insuficiente. Te faltan $" << total - dinero << endl;
        }

        cout << "�Desea realizar otra compra? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Gracias por su visita al parque de diversiones." << endl;

    return 0;
}

