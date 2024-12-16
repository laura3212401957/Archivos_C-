#include<iostream>
#include <locale>
using namespace std;

int main()
{
int matriz[2][4];
int i,j,numero;

for (i=0;i<2;i++){
	for (j=0;j<4;j++){
		do{
		
		cout<<"Posicion  ["<<i<<"] ["<<j<<"]:";
		cin>>numero;
		
		if(numero<0){
			cout<<"ERROR: Debe ingresar un numero positivo. intente de nuevo."<<endl;
		}
		
		}while (numero <0);
		
		matriz[i][j]= numero;
	}
	
	}

for (i=0;i<2;i++){
	for (j=0;j<4;j++){
cout << matriz[i][j]<<" ";
	}
	cout << "\n";
}
system ("pause");
return 0;

}
