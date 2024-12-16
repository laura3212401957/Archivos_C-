#include <iostream>
using namespace std;

int main(){
	int numeros []={1,3,5,7,9,17};
	int numeros2 []={2,4,6,8,10,17};
	int resultado[17]; //arreglo para guardar la mezcla de los arreglos
	int i=0, j=0,k=0; //indices para los tres arreglos
	
	while (i < 6 && j < 6){
		if(numeros[i] < numeros2[j]){
			resultado[k++] = numeros[i++];
		} else {
			resultado[k++] = numeros2[j++];
		}
	}	
	
	//agrega los elementos restantes de 'numeros', si quedan
	
	while (i<6){
		resultado[k++] = numeros[i++];
	}
	
	//agrega los elementos restantes de 'numeros2', si quedan
	
	while (j<6){
		resultado[k++] = numeros2[j++];
	}
	
	for(int n=0; n < 10; ++n){
		cout <<endl<< resultado[n]<<endl<< " ";
	}
	
return 0;
}