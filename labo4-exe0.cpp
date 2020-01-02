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

    char ch;
    x=(rand()%(Max-Min))+Min;
    y=(rand()%(Max-Min))+Min;
    int sum=x+y;
    cout<<x<<endl;
    cout<<"+ "<<y<<endl;
    cout<<"---- Enter the answer below \n";
    cin>>mod;



        if(mod==sum)
        {
            cout<<"congratulation\nThe answer is "<<sum;
        }
        else
        {
            cout<<"Sorry the answer is incorrect."<<endl;
            cout<<"the answer is "<<sum<<endl;
        }
        cout<<"more addition ? ";
        cin>>ch;
        if (ch=='y') continue;
        if (ch=='n')
        {
            cout<<"thanks for using math tutor. ";
            break;
        }

} while (true);


    return 0;
}
