#include<iostream>
using namespace std;
int calculatePrice(int age,int toyPrice);
main()
{
    int age,price,toyPrice,result,diff;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of the washing machine: ";
    cin>>price;
    cout<<"Enter the unit price of each toy: ";
    cin>>toyPrice;
    result=calculatePrice(age,toyPrice);
    diff=result-price;
    if(result>=price)
    {
        cout<<"Yes"<<endl;
        cout<<diff;
    }
    else
    {
        diff=diff*-1;
        cout<<"No"<<endl;
        cout<<diff;
    }
}
int calculatePrice(int age,int toyPrice)
{
    int even,odd,moneyRecieved,money;
    for(int i=1;i<=age;i++)
    {
        if(i%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    odd=odd*toyPrice;
    int i=even;
    for(int j=1;j<=even;j++)
    {
        moneyRecieved=10*j;
        money+=(moneyRecieved-1);
    }
    money=money+odd;
    return money;
}