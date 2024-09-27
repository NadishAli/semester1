#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
	cout<<"Enter the Speed:";
	int speed;
	cin>>speed;
	checkSpeed(speed);
}
void checkSpeed(int speed)
{
	if (speed>100)
	{
	cout<<"YOU WILL BE CHALLENGED!!";
	}
	else
	{
	cout<<"Perfect! You're going good.";
	}
}