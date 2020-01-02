#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int M = 4;
struct Student {
    string name;
    double marks[M];
};
int checkName(string,Student n[],int);
int main()
{
    int num;
    const int S=5;
    ifstream grade;
    grade.open("grading-sheet.txt");
    string student;
    double avr=0;
    Student stu[S];

    getline(grade,stu[0].name);
    for (int i=0;i<S;i++)
    {
        grade>>stu[i].name;
        for (int a=0;a<M;a++)
        {
            grade>>stu[i].marks[a];
        }
    }
    while (true)
    {
        cout<<"Enter the name of the student or stop to exit: ";
        cin>>student;
        if (student=="stop") break;
        num=checkName(student,stu,S);
        if (num==0) continue;
        cout<<"Results for "<<student<<": ";
        for (int i=0;i<M;i++)
        {
            cout<<stu[num].marks[i]<<", ";
            avr+=stu[num].marks[i];
        }
        cout<<"avrage = "<<setprecision(2)<<fixed<<avr/M;
        cout<<endl;
    }
    return 0;
}
int checkName(string student,Student n[],int SIZE)
{
    int i;
    for ( i=0; i<SIZE;i++)
    {
        if (student == n[i].name)
        {
            return i;
            break;
        }
    }
    return 0;
}
