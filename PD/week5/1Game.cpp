#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printMaze();
void printPlayer();
void erasePlayer();
void movePlayer();
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
int x=3,y=3;
main()
{
    system("cls");
    printMaze();
    while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
    }
}
void printMaze()
{
    cout<<"#############################################################################################"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#                                                                                           #"<<endl;
    cout<<"#############################################################################################"<<endl;
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printPlayer()
{
    gotoxy(x,y);
    cout<<"  #  "<<endl;
    gotoxy(x,y+1);
    cout<<"#####"<<endl;
    gotoxy(x,y+2);
    cout<<"  ## "<<endl;
    gotoxy(x,y+3);
    cout<<" #  #"<<endl;
}
void erasePlayer()
{
    gotoxy(x,y);
    cout<<"    "<<endl;
    gotoxy(x,y+1);
    cout<<"    "<<endl;
    gotoxy(x,y+2);
    cout<<"    "<<endl;
    gotoxy(x,y+3);
    cout<<"    "<<endl; 
}
void movePlayer()
{
    erasePlayer();
    x=x+1;
    printPlayer();
}
void movePlayerLeft()

{
    if (getCharAtxy(x - 1, y) == ' ')
    {
        erasePlayer();
        x = x - 1;
        printPlayer();
    }
}
void movePlayerRight()
{
    if (getCharAtxy(x + 1, y) == ' ')
    erasePlayer();
    x=x+1;
    printPlayer();
}
void movePlayerUp()
{
    if (getCharAtxy(x,y-1) == ' ')
    erasePlayer();
    y=y-1;
    printPlayer();
}
void movePlayerDown()
{
    if (getCharAtxy(x,y+1) == ' ')
    erasePlayer();
    y=y+1;
    printPlayer();
}