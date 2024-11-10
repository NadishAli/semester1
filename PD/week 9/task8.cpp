#include<iostream>
using namespace std;
main()
{
    int size,time;
    cout<<"Enter the number of elements: ";
    cin>>size;
    cout<<"Enter "<<size<<" names, one in line:"<<endl;
    string array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        if(i>=1)
        {
        if(array[i]==array[i-1])
        {
            time=time+2;
        }
        else
        {
            time=time+3;
        }
        }
        else
        {
            time=time+2;
        }
    }
    cout<<"Time is: "<<time;
}