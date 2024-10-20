#include<iostream>
using namespace std;
void printUpperPart(int row);
void printLowerPart(int row);
main()
{
    int row;
    cout<<"Enter desired number of rows: ";
    cin>>row;
    row=row/2;
    printUpperPart(row);
    printLowerPart(row);
}
void printUpperPart(int row)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=(row-i);j>0;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void printLowerPart(int row)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=(row-i);k>0;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}