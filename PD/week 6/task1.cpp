#include<iostream>
using namespace std;
string decideActivity(string temperature,string humidity);
main()
{
    string temperature,humidity,activity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    activity=decideActivity(temperature,humidity);
    cout<<"Recomended activity: "<<activity;
}
string decideActivity(string temperature,string humidity)
{
    string activity;
    if(temperature=="warm" && humidity=="dry")
    {
        activity="Play tennis";
    }
    else if(temperature=="warm" && humidity=="humid")
    {
        activity="swim";
    }
    else if(temperature=="cold" && humidity=="dry")
    {
        activity="Play Basketball";
    }
    else if (temperature=="cold" && humidity=="humid")
    {
        activity="Watch TV";
    }
    return activity;
}