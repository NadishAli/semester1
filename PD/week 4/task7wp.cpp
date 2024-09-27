#include<iostream>
#include<windows.h>
using namespace std;
void Maze();
void gotoxy(int x,int y);
void Playermove(int x,int y);
	main()
{
	int x=3, y=2;
	system("cls");
	Maze();
	while(true)
	{
	Playermove(x,y);
	y=y+1;
	if(y == 8)
	{
	y = 2;
	}
	}
	gotoxy(1,8);

}
void Maze()
{
cout << "#######################" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#######################" << endl;
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void Playermove(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);
	gotoxy(x,y);
	cout<<" ";
}