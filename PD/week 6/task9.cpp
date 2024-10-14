#include<iostream>
using namespace std;
string checkPointPosition(int h,int x,int y);
main()
{
    int h,x,y;
    string result;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    result=checkPointPosition(h,x,y);
    cout<<result;
}
string checkPointPosition(int h,int x,int y)
{
    string result;
    if((x>=0 && x<=(3*h)) && (y>=0 && y<=(2*h)))
    {
        result="Inside";
    }
    else if((x>=h && x<=(2*h)) && (y>=2*h && y<=(8*h)))
    {
        result="Inside";
    }
    if((x==0 || x==3*h) && (y==0 || y==2*h))
    {
        result="Border";
    }
    else if((x==h || x==2*h) && (y==2*h || y==8*h))
    {
        result="Border";
    }
    else
    {
        result="OutSide";
    }
    return result;
}