#include <iostream>
using namespace std;

int main() {
    int descuento, opciones, n_viaje, pasaje = 3200, total, total_descuento, transporte;
    char continuar;
    
    cout << endl << "--Bienvenido--" << endl;
    cout << endl << "¿Dónde se va a transportar?" << endl;
    cout << "(1) Metro" << endl;
    cout << "(2) Tranvía" << endl;
    cout << "(3) Cable" << endl;
    cin >> transporte;

    
    if (transporte == 1) {
        cout << endl << "Elige algunas de las opciones, dependiendo de tu caso se hará un descuento" << endl;
        cout << "(1) Estudiante" << endl;
        cout << "(2) Persona de la tercera edad" << endl;
        cout << "(3) Persona menor de edad" << endl;
        cin >> opciones;

        switch (opciones) {
            case 1:  // Estudiante - 20% de descuento
                do {
                    cout << endl << "Ingrese el número de viajes" << endl;
                    cin >> n_viaje;

                    total = pasaje * n_viaje;
                    descuento = total * 0.2;
                    total_descuento = total - descuento;  // Resta el descuento

                    if (n_viaje > 0) {
                        cout << endl << "Se aplica descuento" << endl;
                        cout << "Cobro del pasaje: " << pasaje << " Total: " << total 
                             << " con descuento: " << total_descuento << endl;
                    } else {
                        cout << endl << "Número de viajes inválido." << endl;
                    }
                    cout << endl << "¿Desea calcular otro descuento? (s/n): " << endl;
                    cin >> continuar;
                } while (continuar == 's' || continuar == 'S');
                break;

            case 2:  // Persona de tercera edad - 30% de descuento
                do {
                    cout << endl << "Ingrese el número de viajes" << endl;
                    cin >> n_viaje;

                    total = pasaje * n_viaje;
                    descuento = total * 0.3;
                    total_descuento = total - descuento;  // Resta el descuento

                    if (n_viaje > 0) {
                        cout << endl << "Se aplica descuento" << endl;
                        cout << "Cobro del pasaje: " << pasaje << " Total: " << total 
                             << " con descuento: " << total_descuento << endl;
                    } else {
                        cout << endl << "Número de viajes inválido." << endl;
                    }
                    cout << endl << "¿Desea calcular otro descuento? (s/n): " << endl;
                    cin >> continuar;
                } while (continuar == 's' || continuar == 'S');
                break;

            case 3:  // Menor de edad - 5% de descuento
                do {
                    cout << endl << "Ingrese el número de viajes" << endl;
                    cin >> n_viaje;

                    total = pasaje * n_viaje;
                    descuento = total * 0.05;
                    total_descuento = total - descuento;  // Resta el descuento

                    if (n_viaje > 0) {
                        cout << endl << "Se aplica descuento" << endl;
                        cout << "Cobro del pasaje: " << pasaje << " Total: " << total 
                             << " con descuento: " << total_descuento << endl;
                    } else {
                        cout << endl << "Número de viajes inválido." << endl;
                    }
                    cout << endl << "¿Desea calcular otro descuento? (s/n): " << endl;
                    cin >> continuar;
                } while (continuar == 's' || continuar == 'S');
                break;

            default:
                cout << "Opción no válida." << endl;
                break;
        }
    } else {
        // Si no es metro, no se aplican descuentos
        cout << "No se aplican descuentos en el Tranvía o Cable." << endl;
        cout << "Ingrese el número de viajes" << endl;
        cin >> n_viaje;

        total = pasaje * n_viaje;
        cout << "Cobro total sin descuento: " << total << endl;
    }

    return 0;
}
