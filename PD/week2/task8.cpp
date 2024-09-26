#include<iostream>
using namespace std;
main()
{
	cout<<"Enter vegetable price per kilogram (in coins):";
	float vegetable_price;
	cin>>vegetable_price;
	cout<<"Enter fruit price per kilogram (in coins):";
	float fruit_price;
	cin>>fruit_price;
	cout<<"Enter total kilograms of vegetables: ";
	int vegetable;
	cin>>vegetable;
	cout<<"Enter total kilograms of fruit: ";
	int fruit;
	cin>>fruit;
	float coins;
	coins=(vegetable_price*vegetable)+(fruit_price*fruit);
	float rupees;
	rupees=coins/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<rupees;
}

	