#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    
    for (int i = 1; i <= 5; i++) {
        suma += i;
    }

    cout << "La suma acumulada de la serie 1+2+3+4+5 es: " << suma << endl;

    return 0;
}

