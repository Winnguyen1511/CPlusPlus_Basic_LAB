#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,sum,Max,Min,i;
    i=0;
    cout<<"enter an integer: ";
    cin>>a;
    if(a!=0)
    {
sum=a;
    Max=a;
    Min=a;
    while (a!=0)
    {
        cout<<"enter the another integer : ";


        if (a>Max) Max=a;
        if (a<Min) Min=a;
        cin>>a;
        sum =sum+a;
        i++;
    }
    sum=sum/i;
    cout  <<"The average of the "<<i<<" numbers you entered is "
    <<setprecision(2)<<fixed<< sum<<endl;
    cout <<" the greatest number is "<<Max<<endl;
    cout<<" the least number is "<<Min;

    return 0;
    }
    else
    {
    return 0;

    }

}

