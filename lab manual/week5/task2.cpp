#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float num1,num2;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	cout<<num1<<" raised to the power "<<num2<<" is:"<<pow(num1,num2);
}