#include <iostream>

using namespace std;

int main() {
    int N;

    // Solicitar el número de empleados
    cout << "Ingrese el número de empleados: ";
    cin >> N;

    // Validar que el número de empleados sea positivo
    if (N <= 0) {
        cout << "El número de empleados debe ser positivo." << endl;
        return 1;
    }

    // Crear un vector para almacenar los sueldos de cada empleado
    int sueldos[N];
    int edad, antiguedad, sueldoSemanal, sueldoQuincenal;
    int sumaNomina = 0;

    for (int i = 0; i < N; i++) {
        // Solicitar datos del empleado
        cout << "Ingrese la edad del empleado " << (i + 1) << ": ";
        cin >> edad;
        cout << "Ingrese los años en la compañía del empleado " << (i + 1) << ": ";
        cin >> antiguedad;

        // Validar que la edad y la antigüedad no sean negativas
        if (edad < 0 || antiguedad < 0) {
            cout << "La edad y los años en la compañía deben ser positivos." << endl;
            return 1;
        }

        // Calcular la suma de los años en la compañía
        int sumaAntiguedad = antiguedad * (antiguedad + 1) / 2;

        // Calcular el sueldo semanal
        sueldoSemanal = 100 + edad + (sumaAntiguedad * 10000);

        // Calcular el sueldo quincenal
        sueldoQuincenal = sueldoSemanal * 2;

        // Almacenar el sueldo quincenal en el vector y actualizar la suma total de la nómina
        sueldos[i] = sueldoQuincenal;
        sumaNomina += sueldoQuincenal;
    }

    // Mostrar el sueldo de cada empleado
    cout << "\nSueldos quincenales de los empleados:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Empleado " << (i + 1) << ": $" << sueldos[i] << endl;
    }

    // Mostrar la suma total de la nómina mensual
    cout << "\nLa nómina mensual total es: $" << sumaNomina << endl;

    return 0;
}
