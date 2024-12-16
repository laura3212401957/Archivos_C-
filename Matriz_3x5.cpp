#include<iostream>
#include <locale>
using namespace std;

int main()
{
int matriz[3][5];
int i,j,numero;

for (i=0;i<3;i++){
	for (j=0;j<5;j++){
		do{
		
		cout<<"Posicion  ["<<i<<"] ["<<j<<"]:";
		cin>>numero;
		
		if(numero<0){
			cout<<"ERROR: Debe ingresar un numero positivo. intente de nuevo."<<endl;
		}
		matriz[i][j]=numero;
		}while (numero <0);
		
	}
	
	}

for (i=0;i<3;i++){
	for (j=0;j<5;j++){
cout << matriz[i][j]<<" ";
	}
	cout << "\n";
}
system ("pause");
return 0;

}
