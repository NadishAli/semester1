#include<iostream>
using namespace std;
float calculateBill(char servisCode,char time,int minutes);
main()
{
    char servisCode,time;
    int minutes;
    float bill;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>servisCode;
    cout<<"Enter time of the call (D for day, N for night): ";
    cin>>time;
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    bill=calculateBill(servisCode,time,minutes);
    if (servisCode=='P')
    {
    cout<<"Service Type: Premium"<<endl;
    }
    else
    {
        cout<<"Service Type: Regular"<<endl;
    }
    cout<<"Total Minutes Used: "<<minutes<<"minutes."<<endl;
    cout<<"Amount Due: $"<<bill;
}
float calculateBill(char servisCode,char time,int minutes)
{
    float bill;
    if((servisCode=='R'||servisCode=='r') && minutes<=50)
    {
        bill=10;
    }
    else if ((servisCode=='R'||servisCode=='r') && minutes>50)
    {
        minutes=minutes-50;
        bill=10+(minutes*0.2);
    }
    else if((servisCode=='P'||servisCode=='p') && time=='D' && minutes<=75)
    {
        bill=25;
    }
    else if((servisCode=='P'|| servisCode=='p') && time=='D' && minutes>75)
    {
        minutes=minutes-75;
        bill=25+(minutes*0.1);
    }
    else if((servisCode=='P'||servisCode=='p') && time=='N' && minutes<=100)
    {
        bill=25;
    }
    else if((servisCode=='P'||servisCode=='p') && time=='N' && minutes>100)
    {
        minutes=minutes-100;
        bill=25+(minutes*0.05);
    }
    return bill;
}