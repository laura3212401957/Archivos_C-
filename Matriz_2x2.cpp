#include<iostream>
#include <locale>
using namespace std;
/*Este programa lee los datos de una matriz 2x2 y muestra los datos de una matriz */
int main()
{
char matriz[2][2];
int i,j;
//Ingreso de los datos
for (i=0;i<2;i++){
	for (j=0;j<2;j++){
cin >> matriz[i][j];
cout << "Ingrese la letra correspondiente a la posicion ["<<i<<"] ["<<j<<"]: ";
	}
}
//Muestra en pantalla la matriz ingresada
cout << "\nLa matriz que usted ingreso es: \n\n";
for (i=0;i<2;i++){
	for (j=0;j<2;j++){
cout << matriz[i][j]<<" ";
	}
	cout << "\n";
}
system ("pause");
return 0;
}