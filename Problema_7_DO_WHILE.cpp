#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, i = 1, impares = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    do {
        if (i % 2 != 0) {
            suma += i;
            impares++;
        }
        i++;
    } while (impares < n);

    cout << "La suma de los primeros " << n << " n�meros impares es: " << suma << endl;

    return 0;
}

