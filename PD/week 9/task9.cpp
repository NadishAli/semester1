#include<iostream>
using namespace std;
main()
{
    int size=4;
    cout<<"Enter "<<size<<" numbers, one in line:"<<endl;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
    int num=0;
    for(int j=0;j<size;j++)
    {
        num=array[j]+j;
        if(num>9)
        {
            num=num-10;
        }
        cout<<moves[num]<<", ";
    }
}