#include <iostream>
using namespace std;
int main ()
{
	int numero;
	cout << "introduzca un numero" << endl;
	cin >> numero;
	if ((numero%2)==0)
		cout << "el numero "<< numero << " es par";
	else
		cout << "el numero "<< numero << " es impar";
	
	return 0;
}
