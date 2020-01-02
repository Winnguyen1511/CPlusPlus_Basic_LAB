#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    const int Size=5;
    int numbers[Size],Max,Min;
    double sum=0;
    for (int i=0;i<Size;i++)
    {   cout<<"enter number #"<<i+1<<": ";
        cin>>numbers[i];
        sum+=numbers[i];
    }
    Max=numbers[0];
    Min=numbers[0];
    for (int i=1;i<Size;i++)
    {
        if (Max<numbers[i]) Max=numbers[i];
        else if (Min>numbers[i]) Min=numbers[i];
    }
    cout<<"largest is :"<<Max<<endl;
    cout<<"least is: "<<Min<<endl;
    cout<<"average is: "<<setprecision(1)<<fixed<<sum*1./Size<<endl;
    return 0;
}
