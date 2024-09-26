#include<iostream>
using namespace std;
void add(float num1, int num2);
void subtraction(float num1, int num2);
void multiply(float num1, int num2);
void divide(float num1, int num2);
main()
{
	float num1;
	int num2;
	char op;
	cout<<"Enter 1st number:";
	cin>>num1;
	cout<<"Enter 2nd number:";
	cin>>num2;
	cout<<"Enter oprator:";
	cin>>op;
	if (op=='+')
	{
	add(num1,num2);
	}
	if (op=='-')
	{
	subtraction(num1,num2);
	}
	if (op=='*')
	{
	multiply(num1,num2);
	}
	if (op=='/')
	{
	divide(num1,num2);
	}
}
void add(float num1, int num2)
{
	float sum;
	sum=num1+num2;
	cout<<"Addition:"<<sum;
}
void subtraction(float num1, int num2)
{
	float sub;
	sub=num1-num2;
	cout<<"Subtraction:"<<sub;
}
void multiply(float num1, int num2)
{
	float product;
	product=num1*num2;
	cout<<"Multiplication:"<<product;
}
void divide(float num1, int num2)
{
	float divide;
	divide=num1/num2;
	cout<<"Division:"<<divide;
}