# P_2
#include <iostream>//Pablo Guerra
using namespace std;

int triangulo (int numero)
{
	for (int i=0; i<numero; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout << "T";
		}
		cout << "\n";
	}
	for (int i=numero; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			cout << "T";
		}
		cout << "\n";
	}
	return 0;
}

int main ()
{
	int numero;
	cout << "Triangle" << endl;
	cout << "Lines for the triangle" << endl;
	cin >> numero;
	triangulo (numero);
	return 0;
}
