#include<iostream>
using namespace std;
float calculateHotelPrices(string month,int days);
float studioPrice,apartmentPrice;
main()
{
    string month;
    int days;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>days;
    calculateHotelPrices(month,days);
    cout<<"Apartment: "<<apartmentPrice<<"$"<<endl;
    cout<<"Studio: "<<studioPrice<<"$";
}
float calculateHotelPrices(string month,int days)
{
    if (month=="May" || month=="October")
    {
    studioPrice=50*days;
    apartmentPrice=65*days;
        if(days>7 && days<14)
        {
            studioPrice=studioPrice-(studioPrice*5/100);
        }
        else if(days>=14)
        {
            studioPrice=studioPrice-(studioPrice*30/100);
        }
    }
    else if(month=="June" || month=="September")
    {
        studioPrice=75.2*days;
        apartmentPrice=68.7*days;
        if(days>14)
        {
            studioPrice=studioPrice-(studioPrice*20/100);
        }
    }
    else if(month=="July" || month=="August")
    {
        studioPrice=76*days;
        apartmentPrice=77*days;
    }
    if(days>14)
    {
        apartmentPrice=apartmentPrice-(apartmentPrice*10/100);
    }
}