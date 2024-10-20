#include<iostream>
using namespace std;
int frequencyChecker(int num1,int num2);
main()
{
    int num1,num2,result;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter the digit to check: ";
    cin>>num2;
    result=frequencyChecker(num1,num2);
    cout<<"Frequency: "<<result;
}
int frequencyChecker(int num1,int num2)
{
    int result=0;
    int mod;
    for(int i=1;i<20;i++)
    {
        mod=num1%10;
        if(mod==num2)
        {
            result++;
        }
        num1=num1/10;
        if(num1==0)
        {
            break;
        }
    }
    return result;
}