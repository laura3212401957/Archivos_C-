#include <iostream>
#include <locale>
using namespace std;
int main()
{
	string libros [5][2];
	cout <<"Por favor ingrese la siguiente información de los libros: \n";
	string titulo, autor;
	for(int i=0; i < 5; i++)
	{
		cout <<"\n******* Libro "<< i + 1 << "*******:\n";
		cout << "Titulo: ";
		getline(cin, titulo);
		cout << "Autor: ";
		getline(cin, autor);
		libros [i][0] = titulo;
		libros [i][1] = autor;
	}
	cout << "\n La información de los libros que usted ingreso es: \n\n";
	for (int i=0;i<5;i++){
	cout << "Libro "<<i + 1 <<":\n";
	cout << "Titulo: "<<libros [i][0] <<endl;
	cout << "Autor: "<<libros [i][1] <<endl;
	cout << "-------------------\n"; //división de lineas entre los libros
}
	system("pause");
	return 0;
}