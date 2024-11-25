#include<iostream>
using namespace std;
bool isRepeatingCycle(int size,int cycle);
int array[100];
main()
{
    int size,cycle;
    bool result;
    cout<<"Enter the length of the array: ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers, one in each line."<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the cycle length: ";
    cin>>cycle;
    result=isRepeatingCycle(size,cycle);
    if(result)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
bool isRepeatingCycle(int size,int cycle)
{
    bool result=false;
    int count=0;
    if(cycle>size)
    {
        result=true;
    }
    for(int i=0;i<cycle;i++)
    {
        if(array[i]==array[(i+cycle)%size])
        {
            count++;
        }
    }
    if(count==cycle)
    {
        result=true;
    }
    return result;
}