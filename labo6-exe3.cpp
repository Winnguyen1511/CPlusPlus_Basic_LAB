#include <iostream>

using namespace std;

int main()
{
    const int SIZE=12;
    string mth[SIZE]={"January","February","March","April","May","June","July","August","September","November","December"};
    int temp;
    double tempData[SIZE];
    double avr=0;
    for (int i=0;i<SIZE;i++)
    {
        cout<<"enter temp for "<<mth[i]<<": ";
        cin>>tempData[i];
        avr+=tempData[i];
        //cout<<endl;
    }
    avr=avr*1./SIZE;
    cout<<"avr temp is: "<<avr<<endl;
    for (int a=0;a<SIZE;a++)
    {
        if (tempData[a]>avr)
        {
            cout<<mth[a]<<" was above avr "<<"("<<tempData[a]<<")\n";
        }
    }
    return 0;
}
