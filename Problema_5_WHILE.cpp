#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, i = 1;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "La suma de los primeros " << n << " números es: " << suma << endl;

    return 0;
}

