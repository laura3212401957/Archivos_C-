#include <iostream>
using namespace std;
int main()
{
	//Declara un vector que guarda palabras
	string diassem[7];
	cout<<"Ingrese los datos al vector:"<<endl;
	for (int i=0; i <7; i++)
	{
		cout<<"Posicion "<<i<<":";
		cin>>diassem[i];
	}
	cout<<"Los datos cargados al vector son:"<<endl;
	for (int i=0; i < 7; i++)
	{
		cout<<"Dias de la semana["<<i<<"]=";
		cout<<diassem[i]<<endl;
	}
}