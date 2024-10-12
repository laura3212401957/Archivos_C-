#include <iostream>
using namespace std;

int main(){
	int numEstudiantes;
	double nota1, nota2, nota3, promedio;
	char continuar;
	
	do{
	cout <<"--Bienvenid@--"<<endl;
	cout <<"Ingrese el numero de estudiantes: ";
	cin >> numEstudiantes;
	cout << "Ingrese 1er Nota: ";
	cin >> nota1;
	cout << "Ingrese 2da Nota: ";
	cin >> nota2;
	cout << "Ingrese 3era Nota: ";
	cin >> nota3;
	promedio=(nota1+nota2+nota3)/3;
	
	for(int i=0; i < numEstudiantes; i++){
	
	if(promedio >=7){
		cout <<"Promocionado"<<endl;
	}else if (promedio >=4 && promedio <7){
		cout <<"Regular"<<endl;
	}else{
		cout <<"Reprobado"<<endl;
		}
	}
	
	cout << "¿Desea Continuar? (s/n): ";
	cin >> continuar;
	}while (continuar=='s'||continuar=='S');
	return 0;
}
	

