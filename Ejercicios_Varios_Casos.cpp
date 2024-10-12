#include "iostream"
using namespace std;
int main()
{
	int Opciones,Numero, i=0, contador, opcion=0;
	char continuar;	
	do{
	cout<<endl<<"--MENU--"<<endl;
	cout<<endl<<"(1) Caso"<<endl;
	cout<<endl<<"(2) Validar un numero mayor a 100"<<endl;
	cout<<endl<<"(3) Calcular pares entre 50 y 100"<<endl;
	cout<<endl<<"(4) 10 a 1 Decremento"<<endl;
	cout<<endl<<"(5) Imprimir multiplos de 13 de 0 a 10000"<<endl;
	
	cin >>Opciones;
	
	switch (Opciones)
	{
		case 1:
		do{

		cout <<"Ingrese 1 para mostrar mensaje\n";
		cout <<"Ingrese 2 para mostrar mensaje\n";
		cout <<"Ingrese 0 para salir\n";
		
		cout <<"Ingrese una opción para ejecutar\n";
		cin >> opcion;
	}
	while (opcion !=0);
	
	break;
		case 2:
			cout << "Ingrese un numero";
	cin >> Numero;
	while(Numero <=100)
	{
		cout << "Ingrese un numero";
		cin >> Numero;
	}
	
	break;
	
		case 3:
			for(int i=50;i<=100;i+=2)
	{
		cout <<i << endl;
	}
	
	break;
	
		case 4:
				for(int i=10; i > 0; i--)
	{
		cout <<i << endl;
	}

	break;
	
	case 5:
		int contador = 0;
	for(int i=0; i < 10000; i++)
	{
		if(i%13==0)
		{
			contador++;
		}
	}
	cout << contador << endl;
	
	break;
	
	}
	
	cout << "¿Desea Continuar? (s/n): ";
        cin >> continuar;	
	}while (continuar == 's' || continuar == 'S');
	return 0;
}
