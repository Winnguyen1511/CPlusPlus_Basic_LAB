#include <iostream>

using namespace std;
int primeCheck(int,int a[],int);
void display(int);
int main()
{
    int SIZE;
    cout<<"print the ? prime numbers : ";
    cin>>SIZE;
    int arrayPrime[SIZE]={2},num;
    for (int i=1;i<SIZE;i++)
    {
        for (int candidate=3;;candidate+=2)
        {
            num=primeCheck(candidate,arrayPrime,i-1);
            if (num == candidate)
            {
                arrayPrime[i]=num;
                break;
            }
        }
    }
    for (int i=0;i<SIZE;i++)
    {
        cout<<arrayPrime[i]<<"\t";
    }
    return 0;
}
int primeCheck(int a,int num[],int i)
{
    int div;
    for (int b =0;b <= i;b++)
    {
        div=a%num[b];
        if (a%num[b]==0)
        {
            return 0;
            break;
        }
    }
    if (div!=0) return a;
}
