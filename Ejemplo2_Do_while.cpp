#include "iostream"

using namespace std;
int main()
{
    int opcion = -1;
    
    
    while(opcion != 0)
    {
        cout << "Ingrese 1 para mostrar mensaje\n";
        cout << "Ingrese 2 para hacer algo más\n";
        cout << "Ingrese 0 para salir\n";

        cout << "Ingrese una opción a ejecutar\n";
        cin >> opcion;
    }
    
    system("PAUSE");
    return 0;
}
