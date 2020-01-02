#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string unit;
    double amount, usd, rate;
    const double EURO = 1.20;
    const double VND = 0.00004;
    const double GPB = 1.12;
    const double CNY = 0.15;
    cout << "Enter the currency (euro, vnd, gpb or cny): ";
    cin >> unit;
    if (unit == "euro" || unit == "vnd" || unit == "gpb" || unit == "cny")
      {
        if (unit == "euro")
        {
        rate = EURO;
        }
        else if (unit == "vnd")
        {
        rate = VND;
        }
        else if (unit == "gpb")
        {
        rate = GPB;
        }
        else if (unit == "cny")
        {
        rate = CNY;
      }
      cout << "Enter the amount in " << unit <<": ";
      cin >> amount;
    if (amount > 0)
    {
        usd = rate*amount;
        cout << amount <<" " << unit << "=" << setprecision(2)<< fixed << usd <<" " << "usd";
    }
      else cout << "Sorry, the amount must be greater than zero!";
      }
else cout << "Sorry, unknown currency!";
    return 0;
}
