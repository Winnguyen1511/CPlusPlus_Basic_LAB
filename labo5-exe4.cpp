#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void opening()
{
 cout<<"Welcome to the Guessing Game\n";
 cout<<"I'm thinking of a number between 1 and 100 ... \n";
 cout<<"Your guess must be in [1,100]\n ";
}
unsigned int pickup();
int check(int);
int result(int);
int highscore(int,int);
void ending(int,int,int);
char YorN();
int main()
{
    opening();
    int Pickup;
    Pickup=pickup();
    int guess=0,games=0,best;
    char ask;
    while(true)
    {
        games++;
        guess+=result(Pickup);
        best=highscore(guess,best);
        char ask= YorN();
        if(ask=='Y'||ask=='y') continue;
        else if(ask=='N' || ask=='n') break;
    }

    ending(guess,games,best);
    return 0;
}
unsigned int pickup()
{
    //take the random number
    srand(time(0));
    unsigned int value;
    const int Max=100,Min=1;
     value=(rand()%(Max-Min)+1)+Min;
     return value;
}
int check(int x,int y)
{
    //take the subtraction of the trial and the actual number;
    return x-y;
}

int result(int Pickup)
{
    //check the number low or high or correct
    // return the guesses times
    int num;
    int i=0;
    while(true)
    {
        i++;
        if(i>=7)
        {
            cout<<"You lose ";
            break;
        }
        while (true)
        {
            cout<<"Your guess? ";
            cin>>num;
            if(num>=1&&num<=100) break;
            else
            {
                cout<<"wrong numbers\n";
                continue;
            }
        }
        if (check(Pickup,num)!=0)
        {
            if(check(Pickup,num)>0)cout<<"too low.\n";
            else cout<<"too high.\n ";
            continue;
        }
        else
        {
            cout<<"You got it in "<<i<<" guesses. ";
            break;
        }
    }
    return i;
}
int highscore(int i,int best)
{
    //find the Best Game.
    if (i<best) best=i;
    return best;
}
char YorN()
{
    //ask Yes or No .
    char ask;
    while (true)
    {
        cout<<"Do you want to play again(Y/N) ? ";
        cin>>ask;
        if (ask=='Y'||ask=='y'||ask=='n'||ask=='N') break;
        else continue;
    }
    return ask;
}
void ending(int i,int games,int best)
{
    //print information
    double ovr;
    cout<<"you guessed "<<i<<" times "<<endl;
    cout<<"you played "<<games<<" games "<<endl;
    ovr=i*1./games;
    cout<<"guess/games "<<ovr<<endl;
    cout<<"best game "<<best;
}
