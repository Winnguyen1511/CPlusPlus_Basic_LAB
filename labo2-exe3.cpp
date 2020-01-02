#include <iostream>
#include<iomanip>
using namespace std;

int main()
{double tempC,tempF;
cout <<"enter the temp in Celcius: ";
cin>>tempC;
tempF=(9./5)*tempC + 32;

cout <<tempC<<" degrees Celsius = "<<setprecision(2)<<fixed<<tempF<<" degrees Farenheit"<<endl;
}
