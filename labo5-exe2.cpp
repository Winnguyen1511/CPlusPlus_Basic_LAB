#include <iostream>

using namespace std;
int isPrime(int n);
int main()
{
    while(true)
    {
    int num;
    cin>>num;
    if (num==0) break;
    if (num==1)
    {
        cout<<" not prime\n";
        continue;
    }
    if(isPrime(num)==num)
    {
        cout<<" is prime\n";
    }
    else
    {
        cout<<" is not prime\n"
        <<"because the divisors is "<<isPrime(num)<<endl;
    }
    }
    return 0;
}
int isPrime(int x)
{
int i;
 for( i=2;i<=x;i++)
 {
     if (x%i==0)
        break;
 }
 return i;
}
