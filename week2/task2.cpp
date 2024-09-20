#include<iostream>
using namespace std;
main()
{
	cout<<"Number of Minutes:";
	int minut;
	cin>>minut;
	cout<<"Frames per Second:";
	int frame;
	cin>>frame;
	int result;
	result=minut*frame*60;
	cout<<"Total Number of Frames:"<<result;
}