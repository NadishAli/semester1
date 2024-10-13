#include<iostream>
using namespace std;
string calculateGreaterNum(int num1,int num2);
main()
{
    int num1,num2;
    string result;
    cout<<"Enter the first Number: ";
    cin>>num1;
    cout<<"Enter the second Number: ";
    cin>>num2;
    result=calculateGreaterNum(num1,num2);
    cout<<result;
}
string calculateGreaterNum(int num1,int num2)
{
    string ans;
    if(num1>num2)
    {
        ans="True";
    }
    else
    {
        ans="False";
    }
    return ans;
}