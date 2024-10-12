#include <iostream>
using namespace std;

int main() {
    int i = 1, suma = 0;

    do {
        suma += i;
        i++;
    } while (i <= 5);

    cout << "La suma acumulada es: " << suma << endl;

    return 0;
}

