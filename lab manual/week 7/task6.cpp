#include<iostream>
using namespace std;
int calculateGCD(int num1,int num2);
int calculateLCM(int gcd,int num1,int num2);
main()
{
    int num1,num2,gcd,lcm;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    gcd=calculateGCD(num1,num2);
    cout<<"GCD: "<<gcd<<endl;
    lcm=calculateLCM(gcd,num1,num2);
    cout<<"LCM: "<<lcm;
}
int calculateGCD(int num1,int num2)
{
    int gcd;
    int smaller=min(num1,num2);
    int larger=max(num1,num2);
    if(smaller==larger || larger%smaller==0)
    {
        gcd=smaller;
    }
    for(int i=1;i<smaller;i++)
    {
        if(smaller%i==0 && larger%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int calculateLCM(int gcd,int num1,int num2)
{
    int lcm;
    lcm=(num1*num2)/gcd;
    return lcm;
}