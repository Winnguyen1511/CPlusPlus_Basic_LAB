#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,Max,Min;
    double sum;
    cout<<"Enter integer #1: ";
    cin>>a;
    Max=a;
    Min=a;

    sum=a;
    cout<<"Enter integer #2: ";
cin>>a;
sum=sum+a;
if (a>Max) {Max=a;}
    if(a<Min) {Min=a;}
    cout<<"Enter integer #3: ";
    cin>>a;
    sum=sum+a;
if  (a>Max) {Max=a;}
    if(a<Min) {Min=a;}
    cout<<"Enter integer #4: ";
    cin>>a;
    sum=sum+a;
if  (a>Max) {Max=a;}
    if(a<Min) {Min=a;}
    cout<<"Enter integer #5: ";
    cin>>a;
    sum=sum+a;
if (a>Max) {Max=a;}
    if(a<Min) {Min=a;}
    cout<<"the largest number is: "<<Max<<endl;

    cout<<"the least number is: "<<Min<<endl;

    sum=sum/5.;
    cout<<"the average of the five number you entered is "
    <<setprecision(1)<<fixed<<sum;
}

