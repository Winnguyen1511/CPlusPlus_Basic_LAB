#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{string ch;
    int x,y;
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
