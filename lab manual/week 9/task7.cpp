#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[],int num);
main()
{
    int num;
    double sum;
    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>num;
    cout<<"Enter the resistance values (in ohms) of the "<<num<<" resistors, one per line:"<<endl;
    double resistance[num];
    for(int i=0;i<num;i++)
    {
        cin>>resistance[i];
    }
    sum=calculateTotalResistance(resistance,num);
    cout<<"The total resistance of the series circuit is "<<sum<<" ohms.";
}
double calculateTotalResistance(double resistance[],int num)
{
    double sum=0;
    for(int j=0;j<num;j++)
    {
        sum=sum+resistance[j];
    }
    return sum;
}