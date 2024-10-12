#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, i = 1, impares = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    while (impares < n) {
        if (i % 2 != 0) {
            suma += i;
            impares++;
        }
        i++;
    }

    cout << "La suma de los primeros " << n << " números impares es: " << suma << endl;

    return 0;
}

