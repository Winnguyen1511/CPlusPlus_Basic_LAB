#include <iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

int main()
{

    ifstream inputFile ;
    inputFile.open("D:\\DOWNLOAD\\tai lieu\\CSE\\numbers-1.txt");
    double a,sum,Max,Min,i=1;
    inputFile>>a;
    Max=a;
    Min=a;
    sum=a;
    while(inputFile>>a)
    {
        i++;
        sum=sum+a;
        if (a>Max) Max=a;
        if (a<Min) Min=a;
    }
    sum=sum/i;
    cout<<"Max : "<<Max<<"\n"<<"Min: "<<Min;
    cout<<"\nAverage value : "
    <<setprecision(2)<<fixed<<sum;
}
