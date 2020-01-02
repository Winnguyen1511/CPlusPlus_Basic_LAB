#include <iostream>

using namespace std;
//int checkYear(int);
int checkDate(int,int);
//int checkMonth(int);
int main()
{
    const int SIZE=12;
    string mth[SIZE]={"January","February","March","April","May","June","July","August","September","November","December"};
    int Max_date[SIZE]={31,29,31,30,31,30,31,31,30,31,30,31};
    int year,month,date;
    char ch;
    while (true)
    {
        cout<<"Enter the date (year/month/date ): ";
        cin>>year;
        cin>>ch;
        if (year==0) break;
        if(year>0)
        {
            cin>> month;
            cin>>ch;
            if (month>=1&&month<=12)
            {
                cin>>date;
                if (checkDate(date,Max_date[month-1])==date)
                {
                    cout<<"the date is :"<<mth[month-1]<<" "
                    <<date<<", "<<year;
                }
                else continue;
            }
            else continue;
        }
         else continue;
        cout<<endl;
    }
    return 0;
}
int checkDate(int num,int maxdate)
{
    if(num<= maxdate) return num;
    return 0;
}
