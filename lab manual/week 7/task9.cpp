#include<iostream>
using namespace std;
int calculatePrice(int money,int year);
main()
{
    int money,year,result,diff;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter year: ";
    cin>>year;
    result=calculatePrice(money,year);
    diff=money-result;
    if(money>result)
    {
        cout<<"Yes! He will live a carefree life and will have "<<diff<<" dollars left.";
    }
    else
    {
        diff=diff*-1;
        cout<<"He will ned "<<diff<<" dollars to survive.";
    }
}
int calculatePrice(int money,int year)
{
    int price=0;
    int age=18;
    for(int i=1800;i<=year;i++)
    {
        if(i%2==0)
        {
            price=price+12000;
        }
        else
        {
            age=age+(i-1800);
            price=price+12000+(50*age);
        }
    }
    return price;
}