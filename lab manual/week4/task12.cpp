#include<iostream>
using namespace std;
void calculatePayableAmount(string day,float totalamount);
main()
{
	string day;
	float totalamount;
	cout<<"Enter the day of purchase:";
	cin>>day;
	cout<<"Enter the total purchase amount:$";
	cin>>totalamount;
	calculatePayableAmount(day,totalamount);
}
void calculatePayableAmount(string day,float totalamount)
{
	float payableamount;
	if(day=="Sunday")
	{
	payableamount=totalamount-(totalamount*10/100);
	cout<<"Payable amount:$"<<payableamount;
	}
	else
	{
	payableamount=totalamount-(totalamount*5/100);
	cout<<"Paysble amount:$"<<payableamount;
	}
}