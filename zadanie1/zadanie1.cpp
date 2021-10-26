#include <iostream>

using namespace std;

int main()
{
	float a, b;

	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;

	if (a == 0)
	{
		if (b == 0)

			cout << "roznanie tozsamosciowe\n";
		else
			cout << "rownanie sprzeczne\n";
	}

	else
	{
		cout << "x = " << -b / a << endl;
	}
}
