#include<iostream>
using namespace std;
int reverseNumber(int num);
main()
{
    int number;
    cout<<"Enter the number of elements: ";
    cin>>number;
    reverseNumber(number);
}
int reverseNumber(int number)
{
    int num[number];
    cout<<"Enter "<<number<<" numbers, one per line:"<<endl;
    for(int i=0;i<number;i++)
    {
        cin>>num[i];
    }
    cout<<"Number in reverse order: ";
    for(int j=(number-1);j>=0;j--)
    {
        cout<<num[j]<<" ";
    }
}