#include<iostream>
using namespace std;
void tpChecker(int people, int tPaper);
main()
{
	cout<<"Numbser of people in the household: ";
	int people;
	cin>>people;
	cout<<"Number of rolls of Tissue Papers: ";
	int tPaper;
	cin>>tPaper;
	tpChecker(people,tPaper);
}
void tpChecker(int people, int tPaper)
{
	int sheetsAvailable;
	sheetsAvailable=500*tPaper;
	int sheetsUse;
	sheetsUse=people*57;
	int days;
	days=sheetsAvailable/sheetsUse;
	if (days>14)
	{
	cout<<" Your TP will last "<<days<<" days, no need to panic!";
	}
	else
	{
	cout<<" Your TP will last only "<<days<<" days, buy more!";
	}
}