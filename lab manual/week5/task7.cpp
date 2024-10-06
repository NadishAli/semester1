#include<iostream>
using namespace std;
string checkNumber(int num);
main()
{
    int num;
    string result;
    cout<<"Enter a three digit number: ";
    cin>>num;
    result=checkNumber(num);
    cout<<result;
}
string checkNumber(int num)
{
    int modulus1,modulus2;
    string ans;
    modulus1=num%10;
    num=num/10;
    modulus2=num/10;
    if(modulus1==modulus2)
    {
        return "The Number is symmetrical";
    }
    else
    {
        return "The Number is not symmetrical";
    }
}