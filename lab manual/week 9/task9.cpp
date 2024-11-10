#include<iostream>
using namespace std;
bool canPayWithChange(double change[],double totalDue);
main()
{
    double change[4];
    double totalDue;
    cout<<"Enter quarters: ";
    cin>>change[0];
    cout<<"Enter dimes: ";
    cin>>change[1];
    cout<<"Enter nickels: ";
    cin>>change[2];
    cout<<"Enter pennies: ";
    cin>>change[3];
    cout<<"Enter the total amount due: $";
    cin>>totalDue;
    cout<<"Can you pay the amount? ";
    if(canPayWithChange(change,totalDue))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
bool canPayWithChange(double change[],double totalDue)
{
    double total=0;
    total +=change[0]*0.25;
    total +=change[1]*0.1;
    total +=change[2]*0.05;
    total +=change[3]*0.01;
    if(total>=totalDue)
    {
        return true;
    }
    else
    {
        return false;
    }
}