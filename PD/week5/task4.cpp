#include<iostream>
using namespace std;
int calculateHours(int hours,int days,int workers);
main()
{
    int hours,days,workers;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workes: ";
    cin>>workers;
    calculateHours(hours,days,workers);
}
int calculateHours(int hours,int days,int workers)
{
    int requiredHours,totalHours,diff;
    totalHours=days*9*workers;
    diff=totalHours-hours;
    if(totalHours<hours)
    {
        diff=diff*-1;
        cout<<"Not enough time! "<<diff<<"hours needed.";
    }
    else
    {
        cout<<"Yes!"<<diff<<" hours left.";
    }
}