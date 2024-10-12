#include <iostream>
using namespace std;
int main()
{
	int Opciones,Promedio; 
	float Total_preguntas, Correctas;
	cout<<endl<<"--Bienvenido al Test de Capacitacion--"<<endl;
	cout<<endl<<"¡IMPORTANTE!"<<endl<<"En este test hay que tener en cuenta el numero de preguntas los cuales son 10, por lo cual va a ser importante para conocer su nivel de su postulacion."<<endl;
	cout<<endl<<"Ingrese el numero (1) para continuar: "<<endl;

	cin>>Opciones;

	switch(Opciones)
{
	case 1:
		cout<<"Ingrese la cantidad de preguntas correctas (1 a 10): ";
		cin>>Correctas;
		cout<<"Ingrese la cantidad total de preguntas: ";
		cin>>Total_preguntas;
		if(Total_preguntas != 10)
		{
			cout<<"el numero total de preguntas debe ser 10"<<endl;
		} else
			{
			Promedio=(Correctas/Total_preguntas)*100;
			
		if (Opciones==1){
		if(Promedio>=90){
		cout<<"Nivel Maximo";
		}else if(Promedio>=75){
		cout<<"Nivel Medio";
		}else if(Promedio>=50){
		cout<<"Nivel Regular";
		}else{
		cout<<"Fuera de Nivel";
			}
		}
			}
		break;
		}
	
	return 0;	
}
