#include<iostream>
using namespace std;
void longestTime();
main()
{
	longestTime();
}
void longestTime()
{
	cout<<"Enter the number of hours:";
	int hour;
	cin>>hour;
	cout<<"Enter the number of minutes:";
	int minute;
	cin>>minute;
	int result;
	result=hour*60;
	if (result>minute)
	{
	cout<<hour;
	}
	else
	{
	cout<<minute;
	}
}