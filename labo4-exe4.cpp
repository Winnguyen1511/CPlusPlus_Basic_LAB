#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    cout << "I'm thinking of a number" << endl;
    unsigned int result,guess,i;
    i=0;
    const int Max=100,Min=1;
    result=(rand()%(Max-Min)+1)+Min;
    cout<<"Can you guess what it is? ";
    cin>>guess;
    do
    {i++;
        if(guess!=result)
        {
            if(guess<result)
            {
                cout<<"sorry that's too low\n";

            }
            else cout<<"sorry that's too high\n";
            cout<<"guess again ";

        }

        else
        {
            cout<<" congratulation ";
            break;
        }
        cin>>guess;
    } while (i<7);
    cout<<"guess "<<i<<" times";
    return 0;
}
