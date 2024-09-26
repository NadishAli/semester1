#include<iostream>
using namespace std;
void feet(float inch);
main()
{
	cout<<"Enter the measurement in inches:";
	float inch;
	cin>>inch;
	feet(inch);
}
void feet(float inch)
{
	float feet;
	feet=inch/12;
	cout<<"Equivalent in feet:"<<feet;
}