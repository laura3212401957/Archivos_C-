#include <iostream>
using namespace std;
int main()
{
 int descuento, opciones, viaje, pasaje=3200, i, num_pasajero;
 	cout <<endl<<"--Bienvenido--"<<endl;
 	cout <<endl<<"Elige algunas de las opciones, dependiendo de tu caso se hara un descuento"<<endl;
 	cout <<endl<<"(1)Estudiante"<<endl;
	cout <<endl<<"(2)Persona de la tercera edad"<<endl;
 	cout <<endl<<"(3)Persona menor de edad"<<endl;
	cin >>opciones;
	 switch (opciones)
	 {
	 case 1:
	 	do{
	 		cout <<endl<<"Ingrese el numero de viajes"<<endl;
	 		cin >>viaje;
	 		descuento = (pasaje*viaje)*0.2;
	 		
	 		for(i=0; i < num_pasajero;i++){
	 			
	 			if (descuento>=0){
	 				cout <<endl<<"Se aplica descuento "<<endl;
	 				cout <<endl<<"Cobro del pasaje: "<<pasaje<<"con descuento: "<<descuento<<endl;
				 }else{
				 	cout <<endl<<"No se aplica descuento "<<pasaje<<endl;
				 }
			 }	 
		 }while (opciones !=0);
		 break;
	 }
 return 0;
}
