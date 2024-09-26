#include<iostream>
using namespace std;
main()
{
	cout<<"Enter Initial Velocity (m/s):";
	float velocity;
	cin>>velocity;
	cout<<"Enter Acceleration (m/s^2):";
	float acceleration;
	cin>>acceleration;
	cout<<"Enter Time (s):";
	float time;
	cin>>time;
	float result;
	result=velocity+(acceleration*time);
	cout<<"Final Velocity (m/s):"<<result;
}