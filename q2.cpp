#include <iostream>//Pablo Guerra
#include <cmath>
using namespace std;


long superpower(long a, long b)
{
	return pow(a,b);
}

int main ()
{
	long a, b, resultado;
	cout << "Super power" << endl;
	cout << "Base number" << endl;
	cin >> a;
	cout << "Power number" << endl;
	cin >> b;
	resultado = superpower(a,b);
	cout << resultado << endl;
	
	return 0;
}
