#include <iostream>

using namespace std;
	int main(){
		
	int nota1,nota2,nota3,total,promedio;
	cout << "Ingrese 1er Nota: ";
	cin >> nota1;
	cout << "Ingrese 2da Nota: ";
	cin >> nota2;
	cout << "Ingrese 3era Nota: ";
	cin >> nota3;
	
	promedio=(nota1+nota2+nota3)/3;
	
	if (promedio >=7)
	{
		cout << "Promocionado";
	}
	else if(promedio >=4){
		cout << "Regular";
	}
	else{
		cout <<"Reprobado";
	}
	return 0;
}
	

