#include <iostream>

using namespace std;
int main(){
	int preguntasTotales;
	float porcentaje, respuestasCorrectas;
	cout << "Ingrese las preguntas totales: ";
	cin >>preguntasTotales;
	cout <<"Ingrese sus respuestas correctas: ";
	cin >>respuestasCorrectas;
	porcentaje=(respuestasCorrectas/preguntasTotales)*100;
	
	if(porcentaje>=90){
		cout <<"Nivel Maximo" << endl;
	}
	else if(porcentaje>=75){
		cout <<"Nivel Medio" << endl;	
	}
	else if(porcentaje>=50){
		cout <<"Nivel Regular" <<endl;
	}
	else{
		cout <<"Fuera de nivel"<<endl;
	}
	return 0;
}
