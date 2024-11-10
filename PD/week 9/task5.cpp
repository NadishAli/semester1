#include<iostream>
using namespace std;
main()
{
    int n=4;
    int count=0;
    bool result=false;
    string array[n];
    cout<<"Enter 4 elements, one in each line:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        for(int j=0;j<i;j++)
        {
        if(array[j]==array[i])
        {
            count++;
        }
        }
    }
    if(count==n)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}