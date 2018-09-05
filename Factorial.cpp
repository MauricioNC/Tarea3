#include <iostream>
using namespace std;

int main ()
{
	int num, fact = 1;
	
	cout << "Ingresa un numero: ";
	cin >> num;
	
	if (num == 0)
	{
		num = 1;
		cout << num;
	}
	else
	{
		for (int i = 1; i <= num; i++)
		{
			fact *= i;
		}
		cout << "El factorial de " << num << " es " << fact;
	
	
	}
	return 0;
}

