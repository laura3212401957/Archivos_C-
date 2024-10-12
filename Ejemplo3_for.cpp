#include "iostream"
#include "stdlib.h"

using namespace std;
int main()
{
	int contador = 0;
	for(int i=0; i < 10000; i++)
	{
		if(i%13==0)
		{
			contador++;
		}
	}
	cout << contador << endl;
	system("PAUSE");
	return 0;
}
