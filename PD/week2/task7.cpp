#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the movie name: ";
	string name;
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	float adult_price;
	cin>>adult_price;
	cout<<"Enter the child ticket price: $";
	float child_price;
	cin>>child_price;
	cout<<"Enter the number of adult tickets sold: ";
	float adult_sold;
	cin>>adult_sold;
	cout<<"Enter the number of child tickets sold: ";
	float child_sold;
	cin>>child_sold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	float percentage;
	cin>>percentage;
	cout<<"     "<<endl;
	cout<<"Movie: "<<name<<endl;
	float total_amount;
	total_amount=(adult_price*adult_sold)+(child_price*child_sold);
	cout<<"Total amount generated from ticket sales: $"<<total_amount<<endl;
	float donation;
	donation=(percentage*total_amount)/100;
	cout<<"Donation to charity ("<<percentage<<"%): $"<<donation<<endl;
	float remaining_amount;
	remaining_amount=total_amount-donation;
	cout<<"Remaining amount after donation: $"<<remaining_amount;
}
	