#include<iostream>
using namespace std;
string sum(int num);
main()
{
    int num;
    string result;
    cout<<"Enter a five-digit number: ";
    cin>>num;
    result=sum(num);
    cout<<result;
}
string sum(int num)
{
    int num1,sum;
    sum=0;
    num1=num%10;
    sum=sum+num1;
    num=num/10;
    num1=num%10;
    sum=sum+num1;
    num=num/10;
    num1=num%10;
    sum=sum+num1;
    num=num/10;
    num1=num%10;
    sum=sum+num1;
    num=num/10;
    sum=sum+num;
    if(sum%2==0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}