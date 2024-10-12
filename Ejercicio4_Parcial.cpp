#include <iostream>

using namespace std;

int main() {
    const int costo_atraccion = 8000;
    const int costo_10_atracciones = 53000;
    const int costo_pasaporte_gold = 93000;
    const int costo_zona_infantes = 24000;
    
    int opcion, num_atracciones, edad_bebe;
    int total = 0;
    int dinero;

    cout << "Bienvenido al parque de diversiones" << endl;
    cout << "1. Boleto para 10 atracciones ($53.000)" << endl;
    cout << "2. Pasaporte Gold (Acceso ilimitado $93.000)" << endl;
    cout << "3. Pagar por atracciones individuales ($8.000 cada una)" << endl;
    cout << "4. Zona de infantes (Para bebés menores de 2 años, $24.000)" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;

    if (opcion == 1) {
        total = costo_10_atracciones;
        cout << "Seleccionaste el boleto para 10 atracciones." << endl;
    } 
    else if (opcion == 2) {
        total = costo_pasaporte_gold;
        cout << "Seleccionaste el Pasaporte Gold." << endl;
    } 
    else if (opcion == 3) {
        cout << "¿Cuántas atracciones vas a disfrutar? ";
        cin >> num_atracciones;
        total = num_atracciones * costo_atraccion;
        cout << "Seleccionaste pagar por " << num_atracciones << " atracciones." << endl;
    } 
    else if (opcion == 4) {
        cout << "Ingresa la edad del bebé: ";
        cin >> edad_bebe;
        if (edad_bebe < 2) {
            total = costo_zona_infantes;
            cout << "El bebé tiene acceso a la zona de infantes." << endl;
        } else {
            cout << "El bebé no es elegible para la zona de infantes." << endl;
            return 0;
        }
    } 
    else {
        cout << "Opción inválida." << endl;
        return 0;
    }

    cout << "El total a pagar es: $" << total << endl;
    cout << "Ingrese el dinero con el que va a pagar: ";
    cin >> dinero;

    if (dinero >= total) {
        int vueltas = dinero - total;
        cout << "Pago realizado con éxito. Sus vueltas son: $" << vueltas << endl;
    } else {
        cout << "Dinero insuficiente. Te faltan $" << total - dinero << endl;
    }

    return 0;
}

