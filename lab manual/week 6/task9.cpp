#include<iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    string title;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;
    title=checkTitle(age,gender);
    cout<<"Your personal title is:"<<title;
}
string checkTitle(int age, char gender)
{
    string title;
    if(age>=16 && gender=='m')
    {
        title="Mr.";
    }
    else if(age>=16 && gender=='f')
    {
        title="Ms.";
    }
    else if(age<16 && gender=='m')
    {
        title="Master";
    }
    else if(age>16 && gender=='f')
    {
        title="Miss";
    }
    return title;
}