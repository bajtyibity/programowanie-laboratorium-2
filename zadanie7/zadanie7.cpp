#include <iostream>

using namespace std;

int main()
{
	bool a, b;

	cout <<"czy masz znizke na samochod"<< endl;
	cout <<"wpisz 1 jeśli tak" << endl;
	cout <<"wpisz 0 jesli nie" << endl;
	cout <<"twoja odpowiedz : ";
	cin >> a;
	cout << endl;

	cout << "czy otrzymales premie" << endl;
	cout << "wpisz 1 jeśli tak" << endl;
	cout << "wpisz 0 jesli nie" << endl;
	cout << "twoja odpowiedz : ";
	cin >> b;
	cout << endl;

	if (a == 0 && b == 1)
	{
		cout <<"Mozesz kupić samochód !\n";
		cout <<"Zniżki na samochód nie ma \n";
	}

	else if (a == 0 || b == 0)
	{
		cout <<"„Zakup samochód trzeba odłożyć na później...\n";
		cout <<"Zniżki na samochód nie ma \n";
	}

	else
	{
		cout << "„Zakup samochód trzeba odłożyć na później...\n";
		cout << "Zniżki na samochód nie ma \n";
	}

}
