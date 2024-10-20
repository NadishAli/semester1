#include<iostream>
using namespace std;
void generateFibonacci(int num);
main()
{
    int num;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>num;
    generateFibonacci(num);
}
void generateFibonacci(int num)
{
    int num1=0;
    int num2=1;
    int sum;
    for(int i=0;i<num;i++)
    {
        cout<<num1<<", ";
        sum=num1+num2;
        num1=num2;
        num2=sum;
    }
}