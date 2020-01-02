#include <iostream>
#include<iomanip>
using namespace std;
double infoSAT(int math,int read,int write);
double infoACT(int,int,int,int);
double infoGPA(double,double,double);
double  getSAT();
double getACT();
double getGPA();
int SATorACT();
double getExam(int);
double ovr(int);
void opening();
void ending(double,double);
int main()
{
    int user;
    double user1,user2;
    opening();
     cout<<"\ninformation of applicant number #";
    cin>>user;
    user1=ovr(user);
     cout<<"\ninformation of applicant number #";
    cin>>user;
    user2=ovr(user);
    ending(user1,user2);
    return 0;
}
double infoSAT(int math, int read, int write)
{
    return (2*math+read+write)/32;
}
double infoACT(int eng, int math,int read, int sci)
{
    return (eng+2*math+read+sci)/1.8;
}
double getSAT()
{
    int math,read,write;
    double SAT;
    cout<<"SAT math? ";
    cin>>math;
    cout<<"SAT reading? ";
    cin>>read;
    cout<<"SAT writing? ";
    cin>>write;
    SAT=infoSAT(math,read,write);
    return SAT;
}
double getACT()
{
    int math,read,sci,eng;
    double ACT;
    cout<<"ACT English? ";
    cin>>eng;
    cout<<"ACT math? ";
    cin>>math;
    cout<<"ACT reading? ";
    cin>>read;
    cout<<"ACT science ";
    cin>>sci;
    ACT=infoACT(eng,math,read,sci);
    return ACT;
}
double getExam()
{
    int ask = SATorACT();
    double exam;
    if (ask==1)
    {
        exam=getSAT();
    }
    else if (ask==2)
    {
        exam=getACT();
    }
    cout<<"exam score: "<<setprecision(1)<<fixed<<exam<<endl;
     return exam;
}
double infoGPA(double actual_gpa,double max_gpa,double transcript)
{
    return (actual_gpa/max_gpa)*100*transcript;
}
double getGPA()
{
    double  GPA,actual_gpa, max_gpa, transcript;
    cout<<"overall GPA ? ";
    cin>>actual_gpa;
    cout<<"max GPA? ";
    cin>>max_gpa;
    cout<<"Transcript Multiplier ? ";
    cin>>transcript;
    GPA=infoGPA(actual_gpa,max_gpa,transcript);
    cout<<"GPA score "<<setprecision(1)<<fixed<<GPA<<endl;
    return GPA;
}
int SATorACT()
{
    cout<<"\ndo you have 1)SAT or 2)ACT? ";
    int ask;
    cin>>ask;
    return ask;
}
double ovr(int user)
{
return getExam()+getGPA();
}
void opening()
{
    cout<<"This program compares two applicants to determine which one seems like the stronger applicant.\n  For each candidate I will need either SAT or ACT scores plus a weighted GPA. ";
}
void ending(double user1,double user2)
{
    cout<<"First applicant overall score  = "<<setprecision(1)<<fixed<<user1<<endl;
    cout<<"Second applicant overall score  = "<<setprecision(1)<<fixed<<user2<<endl;
    if (user1>user2) cout<<"The first applicant seems to be better ";
    else if (user1<user2)cout<<"The second applicant seems to be better ";
    else cout<<"The two applicants seem to be equal";
}
