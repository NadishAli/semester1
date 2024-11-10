#include<iostream>
using namespace std;
bool isSpecialArray(int array[],int size);
main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter "<<size<<" elements of the array (one in each line):"<<endl;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    if(isSpecialArray(array,size))
    {
        cout<<"The array is Special.";
    }
    else
    {
        cout<<"The array is not special.";
    }
}
bool isSpecialArray(int array[],int size)
{
    bool result=false;
    for(int j=0;j<size;j++)
    {
        if(array[j]%2==j%2)
        {
            result=true;
        }
    }
    return result;
}