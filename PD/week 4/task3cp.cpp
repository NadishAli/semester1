#include<iostream>
using namespace std;
void calculateDiscount(string name,float price);
main()
{
	while(true)
	{
	cout<<"Enter the country's name:";
	string name;
	cin>>name;
	cout<<"Enter the ticket price in dollars:$";
	float price;
	cin>>price;
	calculateDiscount(name,price);
	}
}
void calculateDiscount(string name,float price)
{
	float discPrice;
	if (name=="Pakistan")
	{
	discPrice=price-(price*5/100);
	cout<<"Final ticket Price after discount:"<<discPrice<<endl;
	}
	if (name=="Ireland")
	{
	discPrice=price-(price*10/100);
	cout<<"Final ticket Price after discount:"<<discPrice<<endl;
	}
	if (name=="India")
	{
	discPrice=price-(price*20/100);
	cout<<"Final ticket Price after discount:"<<discPrice<<endl;
	}
	if (name=="England")
	{
	discPrice=price-(price*30/100);
	cout<<"Final ticket Price after discount:"<<discPrice<<endl;
	}
	if (name=="Canada")
	{
	discPrice=price-(price*45/100);
	cout<<"Final ticket Price after discount:"<<discPrice<<endl;
	}
}