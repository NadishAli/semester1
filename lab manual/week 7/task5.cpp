#include<iostream>
using namespace std;
int digitSum(int num);
main()
{
    int num,result;
    cout<<"Enter a number: ";
    cin>>num;
    result=digitSum(num);
    cout<<"Sum of digits: "<<result;
}
int digitSum(int num)
{
    int mod;
    int result=0;
    for(int i=1;i<15;i++)
    {
        mod=num%10;
        result=result+mod;
        num=num/10;
        if(num==0)
        {
            break;
        }
    }
    return result;
}