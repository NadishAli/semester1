#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main()
{
	int redRose,whiteRose,tulip;
	cout<<"Red Rose: ";
	cin>>redRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(redRose,whiteRose,tulip);
}
void flowerShop(int redRose, int whiteRose, int tulip)
{
	float rRose;
	rRose=redRose*2;
	float wRose;
	wRose=whiteRose*4.10;
	float tulip1;
	tulip1=tulip*2.5;
	float sum;
	sum=rRose+wRose+tulip1;
	cout<<"Original Price:$"<<sum<<endl;
	if (sum>200)
	{
	float discount;
	discount=sum-(sum*20/100);
	cout<<"Price after Discount:$"<<discount;
	}
	else
	{
	cout<<"No discouont applied.";
	}
}