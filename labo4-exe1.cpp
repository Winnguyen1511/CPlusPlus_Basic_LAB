#include <iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    string ch;
    unsigned int t;
    int x,y,mod;


    const int Min=100;
    const int Max=1000;
do
{


    x=(rand()%(Max-Min))+Min;
    y=(rand()%(Max-Min))+Min;
    int sum=x+y;
    cout<<x<<endl;
    cout<<"+ "<<y<<endl;
    cout<<"---- Enter the answer below \n";
    cin>>mod;
    if(mod!=0)
    {


        if(mod==sum)
        {
            cout<<"congratulation\nThe answer is "<<sum;
        }
        else
        {
            cout<<"Sorry the answer is incorrect."<<endl;
            cout<<"the answer is "<<sum<<endl;
        }
    }
    else cout<<"thank you for math tutor.";
} while (mod!=0);


    return 0;
}
