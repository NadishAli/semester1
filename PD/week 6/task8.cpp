#include<iostream>
using namespace std;
int calculateVolleyballGames(int holidays,int weekends);
main()
{
    string year;
    int holidays,weekends,totaltime;
    cout<<"Enter year type: ";
    cin>>year;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>weekends;
    totaltime=calculateVolleyballGames(holidays,weekends);
    if(year=="leap")
    {
        totaltime=totaltime+(totaltime*15/100);
    }
    cout<<totaltime;
}
int calculateVolleyballGames(int holidays,int weekends)
{
    int gameWeeks,gameHolidays,totalTime;
    gameWeeks=(48*3)/4;
    gameHolidays=(holidays*2)/3;
    totalTime=gameHolidays+gameWeeks;
    return totalTime;
}