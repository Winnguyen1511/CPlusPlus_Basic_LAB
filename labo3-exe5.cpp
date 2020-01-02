#include <iostream>

using namespace std;

int main()
{
   double balance,ck,initial,rate;
   const double rate20=0.1;
   const double rate2039=0.08;
   const double rate4059=0.06;
   const double rate60=0.04;
   cout<<"enter your balance : ";
   cin>>balance;
   initial=balance;

if(balance>=0)
{



    if (balance<400)

    {
        balance=balance-10;
        balance=balance-15 ;
    }
    cout<<"enter number of checks : ";
    cin>>ck;
    if(ck>=0)
    {
        if (ck<20)
    {
        rate=rate20;
    }
    else if (ck<=39)
    {
        rate=rate2039;
    }
    else if (ck<59)
    {
        rate=rate4059;
    }
    else
    {
        rate=rate60;
    }
    balance=balance-rate*ck;
    initial=initial-balance;
    cout<<"your service fees for the month is :$"<<initial<<endl;
}

}
else cout<<"your account is overdraw ";

}
