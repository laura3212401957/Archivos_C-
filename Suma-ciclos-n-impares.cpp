#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

   
    for (int i = 1; i <= n * 2; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }

    cout << "La suma de los primeros " << n << " números impares es: " << suma << endl;

    return 0;
}

