#include <iostream>
#include<string>
using namespace std;

int main()
{
    string name,address,city,country;
    int zip;
    getline(cin,name);
    getline(cin,address);


    cin>>zip;cin.ignore();

    getline(cin,city);
    getline(cin,country);

    cout <<name<<endl;
    cout<<address<<endl;
    cout <<zip<<" "<<city<<endl;

    cout <<country<<endl;
}
