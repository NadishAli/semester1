#include<iostream>
using namespace std;
void printShape(int rowSize);
main()
{
    int rowSize;
    cout<<"Enter desired number of rows: ";
    cin>>rowSize;
    printShape(rowSize);
}
void printShape(int rowSize)
{
    for(int i=1;i<=rowSize;i++)
    {
        for(int j=(rowSize-i);j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}