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
	cout<<"Fuel needed:"<<fuel;
}
	