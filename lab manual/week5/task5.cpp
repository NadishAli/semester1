#include<iostream>
#include<cmath>
using namespace std;
float findDeterminant(int a,int b,int c);
main()
{
	int a,b,c;
	float determinant;
	float root1,root2;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;
	determinant = findDeterminant(a,b,c);
	if(determinant>0)
	{
		root1=(-b+sqrt(determinant))/(2*a);
		root2=(-b-sqrt(determinant))/(2*a);
		cout<<"Solutions: x="<<root1<<" and x="<<root2;
	}
	if(determinant==0)
	{
		root1=root2=-b/(2*a);
		cout<<"Solution: x="<<root1;
	}
	if(determinant<0)
	{
		determinant=-1*determinant;
		float realpart=-b/(2*a);
	cout<<realpart;
	root1=(sqrt(determinant)/(2*a));
	root2=(sqrt(determinant)/(2*a));
	cout<<"Complex Solution: x="<<realpart<<" + "<<root1<<"i and x="<<realpart<<" - "<<root2<<"i";
	}
}
float findDeterminant(int a,int b,int c)
{
	float determinant;
	determinant=(b*b)-4*(a*c);
		return determinant;
}