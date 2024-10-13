#include<iostream>
using namespace std;
float lowestPrice(string periodOfDay,float kilometers);
main()
{
    string periodOfDay;
    float kilometers,price;
    cout<<"Enter the number of kilometers: ";
    cin>>kilometers;
    cout<<"Enter the period of the day(day/night): ";
    cin>>periodOfDay;
    price=lowestPrice(periodOfDay,kilometers);
    cout<<"The Lowest price for "<<kilometers<<" kilometers: "<<price<<" EUR";
}
float lowestPrice(string periodOfDay,float kilometers)
{
    float price;
    if(kilometers<20 && periodOfDay=="day")
    {
        price=0.7+(kilometers*0.79);
    }
    else if(kilometers<20 && periodOfDay=="night")
    {
        price=0.7+(kilometers*0.9);
    }
    else if(kilometers>=20 && kilometers<100)
    {
        price=kilometers*0.09;
    }
    else if(kilometers>=100)
    {
        price=kilometers*0.06;
    }
    return price;
}