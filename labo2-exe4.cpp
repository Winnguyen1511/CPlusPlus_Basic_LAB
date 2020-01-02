#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{double m,h,BMI;
    cout<<"enter the mass in kilograms: ";
cin>>m;
cout<<"enter the height in meters: ";
cin>>h;
BMI=m/pow(h,2);
cout<<"the BMI is :"<<setprecision(1)<<fixed<<BMI<<endl;

}
