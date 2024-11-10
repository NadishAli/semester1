#include<iostream>
using namespace std;
main()
{
    int size,num;
    cout<<"Enter the number of elements: ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers, one in line:"<<endl;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(array[j]%2==0)
            {
                array[j]=array[j]-2;
            }
            else
            {
                array[j]=array[j]+2;
            }
        }
    }
    cout<<"The array after even-odd transformation: [";
    for(int x=0;x<size;x++)
    {
        if(x<size-1)
        {
        cout<<array[x]<<", ";
        }
        else
        {
            cout<<array[x];
        }
    }
    cout<<"]";
}