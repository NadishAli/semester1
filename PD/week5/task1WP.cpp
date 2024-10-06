#include<iostream>
using namespace std;
int multiply(int num);
main()
{
    int result,num;
    cout<<"Enter the number: ";
    cin>>num;
    result=multiply(num);
    cout<<result;
}
int multiply(int num)
{
    int product;
    product=num*5;
    return product;
}