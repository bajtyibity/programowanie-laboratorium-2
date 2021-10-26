#include <iostream>

using namespace std;

int main()
{   
	double a, b, c, delta;

	cout << "podaj a : ";
	cin >> a;
	
	cout << "podaj b : ";
	cin >> b;

	cout << "podaj c : ";
	cin >> c;
	
	delta = (b * b) - 4 * a * c;
	if (delta > 0)
		cout << "sa 2 rozwiazania" << endl;
	else if (delta == 0)
		cout << "jest 1 rozwiazanie" << endl;
	else
		cout << "nie ma rozwiazania" << endl;

}
