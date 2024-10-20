#include<iostream>
using namespace std;
void isPrime(int num);
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    isPrime(num);
}
void isPrime(int num)
{
    string result;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            result="False";
            break;
        }
        result="True";
    }
    cout<<result;
}