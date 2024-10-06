#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float distance,angle,height;
	cout<<"Enter the distance from the base of the tree (in feets):";
	cin>>distance;
	cout<<"Enter the angle of elevation (in degrees):";
	cin>>angle;
	height=distance*tan(angle*1/57.2958);
	cout<<"The height of the tree is :"<<height;
}	