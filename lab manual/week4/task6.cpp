#include<iostream>
using namespace std;
void obtainedmarks(int marks);
main()
{
	int marks;
	cout<<"Enter your score:";
	cin>>marks;
	obtainedmarks(marks);
}
void obtainedmarks(int marks)
{
	if (marks>50)
	{
	cout<<"Pass";
	}
	else
	{
	cout<<"Fail";
	}
}