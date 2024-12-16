#include <iostream>
using namespace std;
int main()
{ //recordar declarar primero proc y funciones
	void proc1(); //llamando o activando procedimiento
	proc1();
}//fin del main
void proc1()
{//area de declaracion de variables y captura de datos
	int base1,altura;
	float area; //area de captura
	cout<<"Dame la base:";
	cin>>base1;
	cout<<"Dame la altura:";
	cin>>altura; //area de operaciones
	area = base1 + altura / 2; //area de despliegue
	cout<<area;
} //fin proc