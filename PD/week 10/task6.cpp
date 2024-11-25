#include<iostream>
using namespace std;
main()
{
    int size,swap;
    cout<<"Enter the number of boxes: ";
    cin>>size;
    int array[size];
    cout<<"Enter "<<size<<" values one in each line"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
        if(array[j]>array[j+1])
        {
            swap=array[j];
            array[j]=array[j+1];
            array[j+1]=swap;
        }
        }
    }
    for(int j=0;j<size;j++)
    {
        cout<<array[j]<<" ";
    }
}