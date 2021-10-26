#include <iostream>

using namespace std;

int main()
{
    bool a, b;
    cout<<"czy pada deszcz";
    cout<<"\n 1-jesli prawda ";
    cout<<"\n 0 jesli nieprawda\n";

    cout << "twoja odpowidz : ";
    cin >> a;
    cout << endl;

    cout << "czy autobus jest na przystanku  \n 1-jesli prawda \n 0 jesli nieprawda\n";
    cout << "twoja odpowidz : ";
    cin >> b;
    
    cout << endl;

    if (a == true && b == true)
        cout << "Wez parasol Dostaniesz sie na uczelnie\n";

    else if (a == 1 && b != 1)
        cout << "Nie dostaniesz sie na uczelnie\n";

    else if (a != 1 && b == 1)
        cout << "Dostaniesz sie na uczelnie\n";

    else
        cout << "nie przewidywalem by ktos to sprawdzal\n";
    
}
