#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate();
void compareMarks();
main()
{
	system("cls");
	printMenu();
	cout<<"IF you want to calculate aggregate Enter 1"<<endl;
	cout<<"IF you want to compare marks Enter 2"<<endl;
	int num;
	cin>>num;
	if (num==1)
	{
	calculateAggregate();
	}
	if (num==2)
	{
	compareMarks();
	}
}
void printMenu()
{
	cout<<" 	########################################"<<endl;
	cout<<"  	 UNIVERSITY ADMISSION MANAGEMENT SYSTEM "<<endl;
	cout<<" 	########################################"<<endl<<endl<<endl;
}
void calculateAggregate()
{
	cout<<"Enter your name:";
	string name;
	cin>>name;
	cout<<"Enter your marks in Matric:";
	float matricmarks;
	cin>>matricmarks;
	cout<<"Enter your marks in Inter:";
	float intmarks;
	cin>>intmarks;
	cout<<"Enter your marks in Ecat:";
	float ecatmarks;
	cin>>ecatmarks;
	float aggregate;
	aggregate=(matricmarks/1100*30)+(intmarks/550*30)+(ecatmarks/400*40);
	cout<<"Your aggregate is "<<aggregate<<" .";
}
void compareMarks()
{
	string name1,name2;
	float ecat1,ecat2;
	cout<<"Enter the name of 1st student:";
	cin>>name1;
	cout<<"Enter the ecat marks of the 1st student:";
	cin>>ecat1;
	cout<<"Enter the name of 2nd student:";
	cin>>name2;
	cout<<"Enter the ecat marks of 2nd student:";
	cin>>ecat2;
	if (ecat1>ecat2)
	{
	cout<<"1:"<<name1<<endl;
	cout<<"2:"<<name2<<endl;
	}
	else
	{
	cout<<"1:"<<name2<<endl;
	cout<<"2:"<<name1<<endl;
	}
	
}