#include<iostream>
using namespace std;
int totalDigits(int num);
main()
{
    int num,result;
    cout<<"Enter a number: ";
    cin>>num;
    result=totalDigits(num);
    cout<<"Total number of digits: "<<result;
}
int totalDigits(int num)
{
    int result;
    for(int i=1;i<100;i++)
    {
        num=num/10;
        if(num==0)
        {
           result=i;
            break;
        }
    }
    return result;
}