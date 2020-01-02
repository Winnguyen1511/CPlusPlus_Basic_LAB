#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double Max,Min,tempC,tempF,n;
    cout <<"Enter the range temp to convert :";
    cin>>Min>>Max;
    if (Min<Max) n=1;
    if (Min>Max) n=-1;
    cout<<"Celsius\tFahrenheit"<<endl;
    for(int i=Min;i!=Max+n;i=i+n)

        {
            tempC=i;
            tempF=(9./5)*tempC + 32;
            cout<<tempC<<"\t"<<setprecision(1)
            <<fixed<<tempF<<endl;
        }
}
