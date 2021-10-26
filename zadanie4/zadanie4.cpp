#include <iostream>

using namespace std;

int main()
{
	double a, b, c, x, w1, w2, w3;

	cout << "podaj liczba do funkcji a" << endl;
	cin >> x;

	//a
	if (x > 0)
	{
		w1 = 2 - x;
	}

	else if (x == 0)
	{
		w1 = 0;
	}

	else
	{
		w1 = -3 * x;
	}

	cout << "w1 = " << w1 << endl;

	//b
	cout << "podaj liczba do funkcji b" << endl;
	cin >> x;

	if (x >= 1)
	{
		w2 = x * x;
	}

	else
	{
		w2 = x;
	}

	cout << "w2 = " << w2 << endl;

	//c
	cout << "podaj liczba do funkcji c" << endl;
	cin >> x;

	if (x > 2)
	{
		w3 = 2 + x;
	}

	else if (x == 2)
	{
		w3 = 8;
	}

	else
	{
		w3 = x - 4;
	}

	cout << "w3 = " << w3 <<endl;

}
