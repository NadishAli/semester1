#include<iostream>
using namespace std;
void printname();
main()
{
	printname();
}
void printname()
{
	string name;
	cout<<"Enter Your name:";
	cin>>name;
	while(true)
	{
	cout<<name<<endl;
	}
}