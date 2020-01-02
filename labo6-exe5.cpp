#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int check(char a[],char b[],int);
int main()
{
    int numCorrect;
    string filename;
    const int SIZE=20;
    ifstream student,correct ;
    correct.open("correct-answers.txt");
    char studentChoice[SIZE],correctChoice[SIZE];
    for (int a=0;a<SIZE;a++)
    {
        correct>>correctChoice[a];
    }
    cout<<"Student file: ";
    getline(cin,filename);
    student.open(filename.c_str());
    for (int i=0;i<SIZE;i++)
    {
        student>>studentChoice[i];
    }
    numCorrect=check(correctChoice,studentChoice,SIZE);
    cout<<endl;
    cout<<"Number of correct answers: "<<numCorrect<<endl;
    double avr=numCorrect*100./SIZE;
    cout<<"Percentage answered correctly: "<<setprecision(2)<<avr<<"%\n";
    if (avr>=70) cout<<"The student passed the exam.";
    else cout<<"The student failed the exam.";
    return 0;
}
int check(char c[],char s[],int SIZE)
{
    int numCorrect=SIZE;
    for (int i=0;i<SIZE;i++)
    {
        if (s[i] != c[i] )
        {
            cout<<"Missed question #"<<i
            <<". Student's answer : "<<s[i]<<" Correct answer : "
            <<c[i]<<endl;
             numCorrect--;
        }
    }
    return numCorrect;
}
