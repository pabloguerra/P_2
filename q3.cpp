#include <iostream> //Pablo Daniel Guerra Cervantes
using namespace std; //A01271665

int fibonacci (int fibonacci_numero)
{
	int numero1, numero2,suma;
	numero1 = 1;
	numero2= 0;
	for (int i=0 ; i< fibonacci_numero - 1  ; i++)
	{
		suma = numero1 + numero2;
		numero2 = numero1;
		numero1 = suma;
	
	}
	return suma;
}

int main()
{
	int fibonacci_numero, resultado;
	cout << "Fibonacci" << endl;
	cout << "Fibonacci position number" << endl;
	cin >> fibonacci_numero;
	resultado = fibonacci (fibonacci_numero);
	cout << "Fibonacci's number is: " << resultado << endl;
	return 0;
}

