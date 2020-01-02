#include <iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    int i=0;
    double sum=0,rain;
    ifstream inputFile ;
    string mth,filename ;
    cout<<"Enter filename: ";
    getline(cin,filename);

    inputFile.open(filename.c_str());

    while (inputFile>>mth)
    {
        cout<<setw(12)<<left<<mth<<"\t";
        inputFile>>rain;
        cout<<rain<<"\n";
        i++;
        sum=sum+rain;
    }
    cout<<"Average rainfall of "<<i<<" months is: ";
    cout<<setprecision(2)<<fixed<<sum/i;
    return 0;
}
