#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	cout<<"Hollidays:";
	int holidays;
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int workingdays;
	workingdays=365-holidays;
	int timeToPlay;
	timeToPlay=(workingdays*63)+(holidays*127);
	int diffNorm;
	diffNorm=30000-timeToPlay;
	int hour;
	hour=diffNorm/60;
	int minute;
	minute=diffNorm%60;
	if (timeToPlay<30000)
	{
	cout<<"Tom sleeps well."<<endl;
	cout<<hour<<" hours and "<<minute<<" minutes less for play";
	}
	else
	{
	cout<<"Tom will run away."<<endl;
	cout<<hour<<" hours and "<<minute<<" minutes  for play";
	}
}