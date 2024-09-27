#include<iostream>
using namespace std;
void possibleBonus(int yourPosition,int friendPosition);
main()
{
	cout<<"Enter your position:";
	int yourPosition;
	cin>>yourPosition;
	cout<<"Enter your friend's position:";
	int friendPosition;
	cin>>friendPosition;
	possibleBonus(yourPosition,friendPosition);
}
void possibleBonus(int yourPosition,int friendPosition)
{
	int bonus;
	bonus=yourPosition+6;
	if (bonus>=friendPosition)
	{
	cout<<"True";
	}
	else
	{
	cout<<"False";
	}
}