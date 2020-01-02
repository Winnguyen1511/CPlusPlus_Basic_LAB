#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int checkName(string,string n[],int);
int main()
{
    int num;
    const int S=5,M=4;
    ifstream grade;
    grade.open("grading-sheet.txt");
    string name[S],student;
    double marks[S][M],avr=0;
    getline(grade,name[0]);
    for (int i=0;i<S;i++)
    {
        grade>>name[i];
        for (int a=0;a<M;a++)
        {
            grade>>marks[i][a];
        }
    }
    while (true)
    {
        cout<<"Enter the name of the student or stop to exit: ";
        cin>>student;
        if (student=="stop") break;
        num=checkName(student,name,S);
        if (num==0) continue;
        cout<<"Results for "<<student<<": ";

        for (int i=0;i<M;i++)
        {
            cout<<marks[num][i]<<", ";
            avr+=marks[num][i];
        }
        cout<<"avrage = "<<setprecision(2)<<fixed<<avr/M;
        cout<<endl;
    }
    return 0;
}
int checkName(string student,string n[],int SIZE)
{
    int i;
    for ( i=0; i<SIZE;i++)
    {
        if (student == n[i])
        {
            return i;
            break;
        }
    }
    return 0;
}
