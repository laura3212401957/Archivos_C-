#include <iostream>
using namespace std;

int main() {
    string cadena = "epica";
    string invertida = "";  // Cadena para almacenar la versión invertida

    // Recorremos la cadena original de atrás hacia adelante
    for (int i = cadena.length() - 1; i >= 0; --i) {
        invertida += cadena[i];
    }

    // Mostramos la cadena invertida
    cout << "Cadena original: " << cadena << endl;
    cout << "Cadena invertida: " << invertida << endl;

    return 0;
}
