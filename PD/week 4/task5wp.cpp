#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
	system("cls");
	gotoxy(2,2);
	cout<<"  #    #   ###   # #     ###   #####   #    #   "<<endl;
	gotoxy(3,3);
	cout<<"  ##   #  #   #  #   #    #    #       #    #   "<<endl;
	gotoxy(4,4);
	cout<<"  # #  #  #####  #    #   #     #      #    #   "<<endl;
	gotoxy(5,5);
	cout<<"  #  # #  #   #  #    #   #      #     ######   "<<endl;
	gotoxy(6,6);
	cout<<"  #   ##  #   #  #   #    #       #    #    #   "<<endl;
	gotoxy(7,7);
	cout<<"  #    #  #   #  # #     ###  #####    #    #   "<<endl;
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
