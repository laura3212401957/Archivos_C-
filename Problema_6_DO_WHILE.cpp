#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, i = 1, pares = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    do {
        if (i % 2 == 0) {
            suma += i;
            pares++;
        }
        i++;
    } while (pares < n);

    cout << "La suma de los primeros " << n << " números pares es: " << suma << endl;

    return 0;
}

