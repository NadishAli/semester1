#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"How many Elements you want to Enter: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i+1<<" :";
        cin>>array[i];
    }
    for(int j=0;j<size;j++)
    {
        if(array[j]!=0 && array[j]!=size-1)
        {
        if(array[j]>array[j-1] && array[j]>array[j+1])
        {
            cout<<array[j]<<" ";
        }
        }
    }
}