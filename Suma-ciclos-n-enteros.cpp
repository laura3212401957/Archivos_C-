#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los primeros " << n << " números enteros es: " << suma << endl;

    return 0;
}

