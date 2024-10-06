#include<iostream>
using namespace std;
float calculateTax(char vehicleCode,float price);
main()
{
    char vehicleCode;
    float price;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>vehicleCode;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    calculateTax(vehicleCode,price);
}
float calculateTax(char vehicleCode,float price)
{
    if(vehicleCode=='M')
    {
        price=price+(price*6/100);
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is "<<price<<".";
    }
    if(vehicleCode=='E')
    {
        price=price+(price*8/100);
         cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is "<<price<<".";
    }
    if(vehicleCode=='S')
    {
        price=price+(price*10/100);
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is "<<price<<".";
    }
    if(vehicleCode=='V')
    {
        price=price+(price*12/100);
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is "<<price<<".";
    }
    if(vehicleCode=='T')
    {
        price=price+(price*15/100);
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is "<<price<<".";
    }
}
