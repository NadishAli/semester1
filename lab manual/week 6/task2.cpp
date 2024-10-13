#include<iostream>
using namespace std;
string parityAnalysis(int num);
main()
{
    int num;
    string result;
    cout<<"Enter a 3-digit number: ";
    cin>>num;
    result=parityAnalysis(num);
    cout<<result;
}
string parityAnalysis(int num)
{
    int modulous=0,sum=0,num1;
    string ans;
    modulous=num%10;
    sum=sum+modulous;
    num1=num/10;
    modulous=num1%10;
    sum=sum+modulous;
    num1=num1/10;
    sum=sum+num1;
    if(num%2==0 && sum%2==0)
    {
        ans="True";
    }
    else if(num%2==1 && sum%2==1)
    {
        ans="True";
    }
    else
    {
        ans="False";
    }
    return ans;
}