#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Ingrese un número positivo menor a 4: ";
        cin >> num;
    } while (num <= 0 || num >= 4);

    cout << "Número ingresado correctamente: " << num << endl;

    return 0;
}

