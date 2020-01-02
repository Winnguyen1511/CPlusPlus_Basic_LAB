#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double m,h,BMI;
    cout<<"enter the mass in kilograms: ";
    cin>>m;
    cout<<"enter the height in meters: ";
    cin>>h;
    if (m>=0&&h>=0)
    {
        BMI=m/pow(h,2);
        cout<<"the BMI is :"<<setprecision(1)<<fixed<<BMI<<endl;
        if(BMI<15)
        {
            cout<<"very severely underweight";
        }
        else if(BMI<16)
        {
            cout<<"severely underweight";
        }
        else if(BMI<18.5)
        {
            cout<<"underweight";
        }
        else if(BMI<25)
        {
            cout<<"Normal(healthy weight)";
        }
        else if(BMI<30)
        {
            cout<<"Overweight";
        }
        else if(BMI<35)
        {
            cout<<"Obese Class I (Moderately obese)";
        }
        else if(BMI<40)
        {
            cout<<"Obese Class II (Severely obese)";
        }
        else
        {
            cout<<"Obese Class III (Very severely obese)";
        }
    }
    else cout<<"wrong information";
}
