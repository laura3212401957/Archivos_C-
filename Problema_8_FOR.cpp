#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Ingrese un n�mero positivo menor a 4: ";
        cin >> num;
    } while (num <= 0 || num >= 4);

    cout << "N�mero ingresado correctamente: " << num << endl;

    return 0;
}

