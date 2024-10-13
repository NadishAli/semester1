#include<iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    string result;
    cout<<"Enter the speed: ";
    cin>>speed;
    result=checkSpeed(speed);
    cout<<result;
}
string checkSpeed(float speed)
{
    string result="slow";
    if(speed>10 && speed<=50)
    {
        result="average";
    }
    else if(speed>50 && speed<=150)
    {
        result="fast";
    }
    else if(speed>150 && speed<=1000)
    {
        result="Ultra fast";
    }
    else if(speed>1000)
    {
        result="Extremely fast";
    }
    return result;
}