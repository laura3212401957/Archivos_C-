#include <iostream>
using namespace std;

int main(){
	
	int numeros[100];
	
	//llena el vector con los números del 1 al 100
	for(int i= 0; i <100; ++i){
		numeros[i] = i + 1;
	}
	
	
	//muestra el contenido del vector en orden descendente
	for(int i = 99; i >=0; --i){
		cout << numeros[i] << " ";
	}
	
	return 0;
}