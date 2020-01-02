#include <iostream>
#include <iomanip>
using namespace std;
double toF(double);
int main()
{
    cout<<"enter range: ";
    int Min,Max,n;
    cin>>Min>>Max;

    if (Min<Max) n=1;
    if (Min>Max) n=-1;
    cout<<"Celsius\tFahrenheit"<<endl;
    for(int i=Min;i!=Max+n;i=i+n)
    {
        cout<<i<<"\t"<<setprecision(1)<<fixed<<toF(i)<<endl;
    }
    return 0;
}
double toF(double x)
{
    return (9./5)*x+32;
}
