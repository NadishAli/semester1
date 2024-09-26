#include<iostream>
using namespace std;
void evenOrOdd(int num);
main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	evenOrOdd(num);
}
void evenOrOdd(int num)
{
	int modulus;
	modulus=num%2;
	if (modulus==0)
	{
	cout<<"Number "<<num<<" is Even";
	}
	else
	{
	cout<<"Number "<<num<<"is Odd";
	}
}