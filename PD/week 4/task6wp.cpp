#include<iostream>
#include<windows.h>
using namespace std;
void printH();
void printA();
void printS();
void printN();
void gotoxy(int x, int y);
main()
{
	system("cls");
	gotoxy(0,0);
	printH();
	printA();
	printS();
	printA();
	printN();
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printH()
{
	cout<<"   #   # "<<endl;
	cout<<"   #   # "<<endl;
	cout<<"   ##### "<<endl;
	cout<<"   #   # "<<endl;
	cout<<"   #   # "<<endl<<endl;

}
void printA()
{
	cout<<"    ###  "<<endl;
	cout<<"   #   # "<<endl;
	cout<<"   ##### "<<endl;
	cout<<"   #   # "<<endl;
	cout<<"   #   # "<<endl<<endl;
}
void printS()
{
	cout<<"   ####   "<<endl;
	cout<<"   #      "<<endl;
	cout<<"    #     "<<endl;
	cout<<"      #   "<<endl;
	cout<<"   ####   "<<endl<<endl;
}
void printN()
{
	cout<<"   #   # "<<endl;
	cout<<"   ##  # "<<endl;
	cout<<"   # # # "<<endl;
	cout<<"   #  ## "<<endl;
	cout<<"   #   # "<<endl<<endl;
}