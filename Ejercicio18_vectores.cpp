#include <iostream>

using namespace std;

int main() {
    const int VALOR_HORA = 60000; // Valor fijo de la hora
    const double DESCUENTO_SALUD = 0.12; // Descuento por salud (12%)
    const double DESCUENTO_PENSION = 0.16; // Descuento por pensión (16%)
    const double DESCUENTO_ARL = 0.04; // Descuento por ARL (4%)
    const double DESCUENTO_CCF = 0.4; // Descuento por caja de compensación (4%)

    int N;
    cout << "Ingrese el número de docentes: ";
    cin >> N;

    int horas[N];
    double sueldoBruto[N], descuentos[N], sueldoNeto[N];

    
    for (int i = 0; i < N; i++) {
        do {
            cout << "Ingrese las horas trabajadas por el docente " << i + 1 << ": ";
            cin >> horas[i];
            if (horas[i] < 0) {
                cout << "Error: El número de horas no puede ser negativo. Ingrese nuevamente: ";
            }
        } while (horas[i] < 0);

        // Cálculo del sueldo bruto
        sueldoBruto[i] = horas[i] * VALOR_HORA;

        // Cálculo de los descuentos
        descuentos[i] = sueldoBruto[i] * (DESCUENTO_SALUD + DESCUENTO_PENSION + DESCUENTO_ARL + DESCUENTO_CCF);

        // Cálculo del sueldo neto
        sueldoNeto[i] = sueldoBruto[i] - descuentos[i];
    }

    
    cout << "\nResumen de nómina:\n";
    cout << "Docente\tHoras\tSueldo Bruto\tDescuentos\tSueldo Neto\n";
    for (int i = 0; i < N; i++) {
        cout << i + 1 << "\t" << horas[i] << "\t" << sueldoBruto[i] << "\t" << descuentos[i] << "\t" << sueldoNeto[i] << endl;
    }

    return 0;
}
