#include <iostream>
#include<cstring>
using namespace std;
void opening();
char YorN();
void head(int);
void repeatString(string,int);
void linehead(int,int);
void up(int);
void down(int);
void line(int);
int main()
{
    opening();
    while(true)
    {
        char ask;
        ask=YorN();
        if(ask=='Y')
        {
            int S;
            cout<<"Enter the size of the rocket: ";
            cin>>S;
            head(S);
            line(S);
            up(S);
            down(S);
            line(S);
            down(S);
            up(S);
            line(S);
            head(S);
           continue;
        }
        else if (ask=='N')
        {
            cout<<"Thank you .";
            break;
        }
        else continue;
    }
    return 0;
}
void head(int S)
{
   for (int i=1;i<=2*S-1;i++)
   {
       linehead(i,S);
       cout<<"\n";
   }
}
void linehead(int num,int S)
{
    int i=0,n=2*S-1,a=0;
    for ( ;n>=num;n--)
    {
        cout<<" ";
    }
    for (;i<num;i++)
    {
        cout<<"/";
    }
    cout<<"**";
    for (;a<num;a++)
    {
        cout<<"\\";
    }
}
void line(int S)
{
    cout<<"+";
    for (int i=1;i<=2*S;i++)
    {
        cout<<"=*";
    }
    cout<<"+\n";
}
void up(int S)
{
    string roof="/\\";
    int num=1;
    for (;num<=S;num++)
    {
        cout<<"|";
        repeatString(".",S-num);
        repeatString(roof,num);
        repeatString(".",S-num);
        repeatString(".",S-num);
        repeatString(roof,num);
        repeatString(".",S-num);
        cout<<"|\n";
    }
}
void down(int S)
{
    string roof="\\/";
    int num=S;
     for (;num>=1;num--)
    {
        cout<<"|";
        repeatString(".",S-num);
        repeatString(roof,num);
        repeatString(".",S-num);
        repeatString(".",S-num);
        repeatString(roof,num);
        repeatString(".",S-num);
        cout<<"|\n";
    }
}
void opening()
{
    cout<<"Welcome to the Rocket Ship Program\n";

}
void repeatString(string figure,int num)
{
    for (int i=1;i<=num;i++)
    {
        cout<<figure;
    }
}
char YorN()
{
    char ask;
    cout<<endl<<"Play ? (Y/N)";
    cin>>ask;
    return ask;
}
