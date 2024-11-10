#include<iostream>
using namespace std;
bool isAlreadyEntered(int element[],int num);
main()
{
    int number;
    cout<<"Enter the number of elements: ";
    cin>>number;
    cout<<"Enter "<<number<<" numbers, one per line:"<<endl;
    int j=0;
    int element[number],uniqueNumber[number];
    for(int i=0;i<number;i++)
    {
        cin>>element[i];
        if(isAlreadyEntered(element,i))
        {
            cout<<"Already Entered: "<<element[i]<<endl;
        }
        else
        {
            uniqueNumber[j]=element[i];
            j++;
        }

    }
    cout<<"Unique numbers entered: ";
    for(int x=0;x<j;x++)
    {
        cout<<uniqueNumber[x]<<" ";
    }
    
}
bool isAlreadyEntered(int element[],int num)
{
    bool result=false;
    for(int i=0;i<num;i++)
    {
        if(element[i]==element[num])
        {
            result=true;
            break;
        }
    }
    return result;
}