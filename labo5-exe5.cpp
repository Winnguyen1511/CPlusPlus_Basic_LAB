#include <iostream>
#include <ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
int menu() ;
int add(int,int);
int subt(int,int);
int multi(int,int);
int divi(int,int);
int result(int,int,int);
int random1();
int random2();
void check(int,int,int);
void display(int,int,int);
int main()
{
    cout<<"Welcome to the math tutor: ";
    while(true)
    {   int x,y;
    x=random1();
    y=random2();
        int choise;
        choise=menu();
        if(choise!=0) check(choise,x,y);
        else
        {
        cout<<"Thank you for using math tutor. ";
        break;
        }
    }
    return 0;
}
int menu()
{
    int choise;
    cout<<"\n------------------------------\n"
    <<"1. Addition  2. Subtraction  3. Multiplication  4. Division  0. Quit \n"
    <<"------------------------------\n";
    while (true)
    {
        cout<<"Enter your choise: ";
        cin>>choise;
        if (choise!=1&&choise!=2&&choise!=3&&choise!=4&&choise!=0) continue;
        else break;
    }
    return choise;
}
void check (int choise,int x,int y)
{
    int trial,Result;
    display(choise,x,y);
    cout<<"-----\n";
    cin>>trial;
    if (trial==result(choise,x,y))
    {
        cout<<"Congratulations! That’s right. ";
    }
    else
    {
        cout<<"Sorry, the correct answer is "<<result(choise,x,y);
    }
}
int add(int x,int y)
{
    return x+y;
}
int subt(int x,int y)
{
    return x-y;
}
int multi(int x,int y)
{
    return x*y;
}
int divi (int x,int y)
{
    return x*1.0/+y;
}
int result(int choise,int x,int y)
{
    if (choise==1) return add(x,y);
    else if(choise==2) return subt(x,y);
    else if (choise==3) return multi(x,y);
    else if (choise==4) return divi(x,y);
    else return 0;
}
int random1()
{
    int t=time(0);
    srand(t+rand());
    const int Min=100;
    const int Max=1000;

    return(rand()%(Max-Min))+Min;
}
int random2()
{
    int t=time(0);
    srand(t+rand());
    const int Min=10;
    const int Max=100;

    return(rand()%(Max-Min))+Min;
}
void display(int choise,int x,int y)
{
    if (choise==1)
    {
        cout<<x<<endl;
        cout<<"+ "<<y<<endl;
    }
    else if(choise==2)
    {
        cout<<x<<endl;
        cout<<"- "<<y<<endl;
    }
    else if (choise==3)
    {
        cout<<x<<endl;
        cout<<"x "<<y<<endl;
    }
    else if (choise==4)
    {
        cout<<x<<endl;
        cout<<": "<<y<<endl;
    }
}
