#include <iostream>
using namespace std;
int main()
{ //recordar declarar primero proc y funciones
	void proc1(); //llamando o activando procedimiento
	proc1();
}//fin del main
void proc1()
{//area de declaracion de variables y captura de datos
	float a,b=0.00022,c; //a pesos colombianos, b tasa de conversion y c monto en eur
	cout<<"Introduce los pesos colombianos que quieres convertir:";
	cin>>a;
	
	 //area de operaciones
	c = a * b; 
	cout<<c;
	cout<<"Euros";
} //fin proc