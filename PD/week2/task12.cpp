#include<iostream>
using namespace std;
main()
{
	cout<<"Number of the square meters you can paint: ";
	int square_meters;
	cin>>square_meters;
	cout<<"Width of the single wall (in meters): ";
	int width;
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	int height;
	cin>>height;
	int area;
	area=width*height;
	int result;
	result=square_meters/area;
	cout<<"Number of walls you can paint: "<<result;
}