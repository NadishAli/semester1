#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a String: ";
    cin>>name;
    int i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    if(i%2==0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}