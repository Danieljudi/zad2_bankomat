#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj" << endl;
    cout <<endl;
    cout<< "Podaj kod PIN:";
    cin >> PIN;

    if(PIN=="5566")
    {
    cout <<"Kod PIN poprawny";
    }
    else
    {
        cout <<"Kod niepoprawny";
    }
    return 0;
}
