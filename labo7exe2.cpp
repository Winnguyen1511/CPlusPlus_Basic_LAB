#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
struct Temperature
{
    double value;
    int occurences;
};
int Count (double  ,vector <double> a , int );
int check(double ,vector <double> a,int);
int main()
{
    cout<<"Welcome to the Temperature Counter\n";
    ifstream inputData;
    string filename;
    cout << "Enter filename : ";
    cin>>filename;
    inputData.open(filename.c_str());
    vector <double> trial;
    vector <double> input;
    double num;
    while (inputData>>num)
    {
        input.push_back(num);
    }
    const int SIZE=input.size();
    for (int i=0;i<SIZE;i++)
    {
    if (check(input[i],trial,i) == 0) trial.push_back(input[i]);
    }
    Temperature tempData[trial.size()];
    for (int i=0;i<trial.size();i++)
    {
        tempData[i].value=trial[i];
    }
    for (int i=0;i<trial.size();i++)
    {
        tempData[i].occurences= Count(tempData[i].value,input,SIZE);
    }
    for (int i=0;i<trial.size();i++)
    {
        cout<<setprecision(1)<<fixed<<tempData[i].value<<" : "<<tempData[i].occurences<<endl;
    }

}
int check(double num,vector <double> a,int S)
{
    int Count=0;
    for (int i=0;i<S;i++)
    {
        if (num == a[i]) Count++;
    }
    return Count;
}
int Count (double num ,vector <double> a, int i)
{
    int c=0;
    for (int b=0 ;b<i;b++)
    {
        if (num == a[b] ) c++;
    }
    return c;
}
