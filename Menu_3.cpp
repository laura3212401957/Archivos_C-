#include <iostream>
using namespace std;
int main()
{
	int  seleccion, Sueldo_Mensual, salario_Mensual, Sub_T=162000, Asistencia, Participacion, Evaluacion;
	float Promedio;
	cout <<endl<< "-- Bienvenido al Menu --"<<endl;
	cout << "Digita la opción que desees realizar"<<endl;
	cout <<"(1) Calcular el sueldo diario de un empleador"<<endl;
	cout <<"(2) Conocer valor de subsidio de transporte"<<endl;
	cout <<"(3) Resultados de capacitación"<<endl;
	
	cin>> seleccion;
	
	switch (seleccion){
		case 1:
			cout <<"Ingresa el sueldo mensual: "<<endl;
			cin>> Sueldo_Mensual;
			cout<<"El sueldo diario de un empleador es:"<< Sueldo_Mensual/30<<endl;
		break;
		
		case 2:
			cout <<"Ingresa el salario mensual: "<<endl;
			cin>> salario_Mensual;
		break;
		
		case 3:
			cout <<"Ingresa el numero de dias asistidos (1 a 5): "<<endl;
			cin>> Asistencia;
			cout <<"Ingresa el numero de participacion (1 a 5): "<<endl;
			cin>> Participacion;
			cout <<"Ingresa el numero que sacaste en la evaluacion (1 a 5): "<<endl;
			cin>> Evaluacion;
			Promedio =(Asistencia+Participacion+Evaluacion)/3;
		break;
	}
	
	if(seleccion==2){
	if (salario_Mensual>=1300000){
		cout <<"Su salario es igual o superior al minimo vigente, por lo tanto no es beneficiario del subsidio de transporte"<<endl;
		cout << "SMLMV: "<< salario_Mensual<<endl;
	} else{
		cout <<"Su salario esta por debajo al minimo vigente, por lo tanto es beneficiario."<< " SMLMV: "<< salario_Mensual<< "+ Subsidio de Transporte: "<< Sub_T <<endl; 
		cout <<"Total a recibir: "<< salario_Mensual+Sub_T <<endl;
	}
}
	if(seleccion==3){
		if(Promedio>=3.0){
			cout <<"Aprobado"<<endl;
		} else{
			cout<<"Reprobado"<<endl;
		}
	}
	return 0;
	}
