#include<iostream>
using namespace std;
float calculatePrice(string name,string day,int quantity);
main()
{
    string name,day;
    int quantity;
    float price;
    cout<<"Enter the fruit name: ";
    cin>>name;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    price=calculatePrice(name,day,quantity);
    cout<<"The total price : "<<price;
}
float calculatePrice(string name,string day,int quantity)
{
    float price;
    if(day=="Sunday" || day=="Saturday")
    {
        if(name=="Banana")
        {
            price=quantity*2.7;
        }
        else if(name=="Apple")
        {
            price=quantity*1.25;
        }
        else if(name=="Orange")
        {
            price=quantity*0.9;
        }
        else if(name=="Grapefruit")
        {
            price=quantity*1.6;
        }
        else if(name=="Kiwi")
        {
            price=quantity*3;
        }
        else if(name=="Pineapple")
        {
            price=quantity*5.6;
        }
        else if(name=="Grapes")
        {
            price=quantity*4.2;
        }
    }
    else
    {
        if(name=="Banana")
        {
            price=quantity*2.5;
        }
        else if(name=="Apple")
        {
            price=quantity*1.20;
        }
        else if(name=="Orange")
        {
            price=quantity*0.85;
        }
        else if(name=="Grapefruit")
        {
            price=quantity*1.45;
        }
        else if(name=="Kiwi")
        {
            price=quantity*2.7;
        }
        else if(name=="Pineapple")
        {
            price=quantity*5.5;
        }
        else if(name=="Grapes")
        {
            price=quantity*3.85;
        }
    }
    return price;
}