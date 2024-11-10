#include<iostream>
using namespace std;
main()
{
    bool result=false;
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers, one in line:"<<endl;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        if(array[i]%10==7)
        {
            result=true;
        }
    }
    if(result)
    {
        cout<<"Boom!";
    }
    else
    {
        cout<<"There is no 7 in the array.";
    }
}