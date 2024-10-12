#include <iostream>
using namespace std;

int main() {
    const int NUM_DOCENTES = 500;
    const float VALOR_HORA = 60000;
    float horas_laboradas, sueldo_bruto, descuentos, sueldo_neto;

    for (int i = 1; i <= NUM_DOCENTES; i++) {
        cout << "Docente " << i << endl;
        cout << "Ingrese el número de horas laboradas: ";
        cin >> horas_laboradas;

        sueldo_bruto = horas_laboradas * VALOR_HORA;

        descuentos = sueldo_bruto * 0.20;
        sueldo_neto = sueldo_bruto - descuentos;

        cout << "Sueldo neto del docente " << i << ": $" << sueldo_neto << endl << endl;
    }

    return 0;
}

