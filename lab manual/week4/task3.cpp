#include<iostream>
using namespace std;
void howManyStickers(int side);
main()
{
	cout<<"Enter the side length of the Rubik's Cube:";
	int side;
	cin>>side;
	howManyStickers(side);
}
void howManyStickers(int side)
{
	int result;
	result=(side*6)*side;
	cout<<"Number of stickers needed:"<<result;
}