#include <iostream>
#include<cstdlib>
#include<string>
#include<time.h>
using namespace std;

int main()
{string ch;
unsigned int t;
    int x,y;
    t=time(0);
    srand(t);
    const int Min=100;
    const int Max=1000;

    x=(rand()%(Max-Min))+100;
    y=(rand()%(Max-Min))+100;
    int sum=x+y;
    cout<<x<<endl;
    cout<<"+ "<<y<<endl;
    cout<<"press Enter to see the answer ... ";
    getline(cin,ch);
    cout<<sum<<endl;
    return 0;

}
