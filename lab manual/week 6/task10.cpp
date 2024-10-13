#include<iostream>
using namespace std;
string sameNumber(int num1,int num2,int num3);
main()
{
    int num1,num2,num3;
    string result;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    result=sameNumber(num1,num2,num3);
    cout<<result;
}
string sameNumber(int num1,int num2,int num3)
{
    string result="False";
    if(num1==num2 && num2==num3)
    {
        result="True";
    }
    return result;
}