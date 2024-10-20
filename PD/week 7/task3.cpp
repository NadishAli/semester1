#include<iostream>
using namespace std;
void printSequence(int num);
main()
{
    int num;
    cout<<"Enter the number to Amplify: ";
    cin>>num;
    printSequence(num);
}
void printSequence(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(i%4==0)
        {
            i=i*10;
        }
        cout<<i<<", ";
        if(i%4==0)
        {
            i=i/10;
        }
    }
}