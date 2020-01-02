#include <iostream>
#include<iomanip>
#include<string>
using namespace std;



int main()
{string mth1,mth2,mth3;
double rain,avr;
avr=0;
    cout <<"1 month: ";
    cin>>mth1;


     cin.ignore();
    cout<<"rainfall "<<mth1<<" is: ";
    cin>>rain;
    avr=avr+rain;
    cout <<"2 month: ";
    cin>>mth2;

    cin.ignore();
    cout<<"rainfall "<<mth2<<" is: ";
    cin>>rain;
    avr=avr+rain;
    cout <<"3 month: ";
    cin>>mth3;

    cin.ignore();
    cout<<"rainfall "<<mth3<<" is: ";
    cin>>rain;
    avr=avr+rain;
    avr=avr/3;
    cout<<"the avr rain fall for "<<mth1<<", "<<mth2<<" and "<<mth3<<" is "
    <<setprecision(2)<<fixed<<avr ;

    }
