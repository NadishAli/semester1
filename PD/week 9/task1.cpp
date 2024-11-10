#include<iostream>
using namespace std;
main()
{
    string name;
    int quantity,amount;
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    cout<<"Enter the name of the fruit: ";
    cin>>name;
    cout<<"Enter the quantity of the fruit: ";
    cin>>quantity;
    for(int i=0;i<4;i++)
    {
        if(fruit[i]==name)
        {
            amount=price[i]*quantity;
            break;
        }
    }
    cout<<"The price of the fruit is: "<<amount;
}