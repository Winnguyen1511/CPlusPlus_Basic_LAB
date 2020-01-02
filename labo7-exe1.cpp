#include <iostream>

using namespace std;
struct Month
{
    string month;
    double temp;
};

int main()
{
    double avr=0;
    const int SIZE=12;
    string mth[SIZE]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    Month tempData[SIZE];
    //tempData[1].month="January";
    for (int i=0;i<SIZE;i++)
    {
        tempData[i].month=mth[i];
    }
     for (int i=0;i<SIZE;i++)
    {
        cout<<"enter temp for "<<tempData[i].month<<" : ";
        cin>>tempData[i].temp;
        avr+=tempData[i].temp;
    }
     avr=avr*1./SIZE;
    cout<<"avr temp is: "<<avr<<endl;
     for (int a=0;a<SIZE;a++)
    {
        if (tempData[a].temp>avr)
        {
            cout<<tempData[a].month<<" was above avr ("<<tempData[a].temp<<")\n";
        }
    }
    return 0;
}
