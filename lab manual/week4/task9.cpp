#include<iostream>
using namespace std;
void fuelneeded(float distance);
main()
{
	float distance;
	cout<<"Enter the distance:";
	cin>>distance;
	fuelneeded(distance);
}
void fuelneeded(float distance)
{
	float fuel;
	fuel=distance*10;
	if (fuel<100)
	{
	cout<<"Fuel needed:100";
	}
	else
	{
	cout<<"Fuel needed:"<<fuel;
	}
}