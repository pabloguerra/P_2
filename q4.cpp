#include <iostream>
using namespace std;


int pallindrome (string number) 
{
	if (number == string(number.rbegin(), number.rend()))
		return true;
	else 
		return false;
}
int main() 
{
	string number;
	int resultado;
	cout << "Number" << endl;
	cin >> number;
	
	cout << string(number.rbegin(), number.rend()) << endl;
	resultado = pallindrome (number);
	if (resultado == true)
		cout << "Pallindrome" << endl;
	else
		cout << "No pallindrome" << endl;
	
	return 0;
}
