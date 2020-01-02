#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    /*while (true) {
        int number; cin >> number;
        if (number == 0) break;
        if (number == 1) {
            cout << "Not prime\n";
            continue;
        }

        int div = 0;
        for (int i = 2; i*i <= number; i++) {
            if (number % i == 0) {
                div = i;
                break;
            }
        }

        if (div == 0) cout << "Prime\n";
        else cout << "Not Prime. Divisor: " << div << endl;
    }*/

    cout<<"Welcome to the Prime Checker ";
    int num,a=0,dev;


    while (true)
    {
        cout<<"Enter a positive integer (0 to exit): ";
        cin>>num;
        if (num!=0)
        {
            for(int i=2;i*i<=num;i++)
            {
                if(num%i==0)
                {
                    dev=i;
                    a++;
                    break;

                }


            }

            if (a==0)
            {
                cout<<num<<" is prime"<<endl;
            }
            else cout<<num<<" is not prime because is a multiple of "<<dev<<endl;
        }
        else if(num==2) cout<<num<<"is prime"<<endl;
        else
        {
            cout<<"Thank you";
            break;
        }
    }

    return 0;
}
