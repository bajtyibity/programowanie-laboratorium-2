#include <iostream>

using namespace std;

int main()
{
	double x, y, z;

	cout << "podaj x :";
	cin >> x;

	cout << "podaj y :";
	cin >> y;

	cout << "podaj z :";
	cin >> z;


	//dla x
	if (x <= y && x <= z)
	{
		cout << "x" << x << endl;
		if (z <= y)
		{
			cout << "z" << z << endl;
			cout << "y" << y << endl;
		}

		else
		{
			cout << "y" << y << endl;
			cout << "z" << z << endl;
		}
	}

	//dla y
	else if (y <= x && y <= z)
	{
		cout << "y" << y << endl;

		if (x <= z)
		{
			cout << "x" << x << endl;
			cout << "z" << z << endl;
		}

		else
		{
			cout << "z" << z << endl;
			cout << "x" << x << endl;
		}
	}

	//dla z
	else
	{
		cout << "z" << z << endl;

		if (x <= y)
		{
			cout << "x" << x << endl;
			cout << "y" << y << endl;
		}

		else
		{
			cout << "y" << y << endl;
			cout << "x" << x << endl;
		}
	}
}

