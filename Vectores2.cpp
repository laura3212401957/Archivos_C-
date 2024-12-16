#include <iostream>
using namespace std;
int main()
{
	//Declarar un vector que guarda caracteres
	char letras[5];
	cout<<"Ingrese  los datos al vector:"<<endl;
	for (int i=0; i < 5; i++)
	{
		cout<<"Posicion "<<i<<":";
		cin>>letras[i];
	}
	cout<<"Los datos cargados al vector son:"<<endl;
	for (int i =0; i < 5; i++)
	{
		cout<<"letras["<<i<<"]=";
		cout<<letras[i]<<endl;	
	}
}