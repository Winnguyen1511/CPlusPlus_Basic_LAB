#include <iostream>
#include <iomanip>
using namespace std;

int main()
{double x1,sum;
cout <<"1 grade: ";
cin>>x1;
sum=sum+x1;
cout<<"2 grade: ";
cin>>x1;
sum+=x1;
cout <<"3 grade: ";
cin>>x1;
sum+=x1;
cout <<"4 grade: ";
cin>>x1;
sum+=x1;
cout <<"5 grade: ";
cin>>x1;
sum+=x1;
sum=sum/5;
cout <<"avr grade is : "<<setprecision(2)<<fixed<<sum<<endl;



}
