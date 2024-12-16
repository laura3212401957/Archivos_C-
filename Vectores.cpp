#include <iostream>
using namespace std;
int main()
{
	int vector[7];
	cout<<"Ingrese los datos al vector"<<endl;
	for(int i=0; i <7; i++)
	{
		cout<<"posicion"<<i<<":";
		cin>>vector[i];
		
	}
	if (vector>=0){
	cout<<"Los datos cargados al vector son:"<<endl;
	for(int i =0; i < 7; i++)
	{
		cout<<"vector["<<i<<"]=";
		cout<<vector[i]<<endl;
	}
}else{
	cout<<"Error"<<endl;
}
}