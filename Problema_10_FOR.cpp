#include <iostream>
using namespace std;

int main() {
    const int NUM_DOCENTES = 500;
    const float VALOR_HORA = 60000;
    float horasTrabajadas, salario, descuentos, salarioFinal;

    for (int i = 1; i <= NUM_DOCENTES; i++) {
        cout << "Docente " << i << endl;
        cout << "Ingrese el número de horas trabajadas: ";
        cin >> horasTrabajadas;

        salario = horasTrabajadas * VALOR_HORA;
        descuentos = salario * 0.12; // 12% de descuentos (aproximado para salud, pensión, ARL, etc.)
        salarioFinal = salario - descuentos;

        cout << "El salario final del docente es: " << salarioFinal << endl;
    }

    return 0;
}

