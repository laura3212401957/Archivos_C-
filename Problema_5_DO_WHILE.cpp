#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, i = 1;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    do {
        suma += i;
        i++;
    } while (i <= n);

    cout << "La suma de los primeros " << n << " números es: " << suma << endl;

    return 0;
}

