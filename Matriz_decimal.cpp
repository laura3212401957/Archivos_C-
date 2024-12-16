#include<iostream>
#include <locale>
using namespace std;
/*Este programa lee los datos de una matriz 3x4 y muestra los datos de una matriz */
int main(){
double matriz[3][4];
int i,j;
//Ingreso de los datos
for (i=0;i<3;i++){
	for (j=0;j<4;j++){
cout << "Ingrese el numero decimal correspondiente a la posicion ["<<i<<"] ["<<j<<"]: ";
cin >> matriz[i][j];
	}
}
//Muestra en pantalla la matriz ingresada
cout << "\nLa matriz que usted ingreso es: \n\n";
for (i=0;i<3;i++){
	for (j=0;j<4;j++){
cout << matriz[i][j]<<" ";
	}
	cout << "\n";
}
system ("pause");
return 0;
}