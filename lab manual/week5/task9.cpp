#include<iostream>
using namespace std;
string timeTravel(int hours,int min);
main()
{
    int hours,min;
    string time;
    cout<<"Enter Hours: ";
    cin>>hours;
    cout<<"Enter Minutes: ";
    cin>>min;
    timeTravel(hours,min);
 }
 string timeTravel(int hours,int min)
{
    int timeInMinuts,calculeMinutes,calculateHours;
    timeInMinuts=hours*60+min+15;
    calculeMinutes=timeInMinuts%60;
    calculateHours=timeInMinuts/60;
    if(calculateHours>23)
    {
        calculateHours=calculateHours-24;
    }
    cout<<calculateHours<<":"<<calculeMinutes;
}