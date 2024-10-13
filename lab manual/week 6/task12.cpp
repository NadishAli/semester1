#include<iostream>
using namespace std;
float totalIncome(string screeningType,int rows,int columns);
main()
{
    string screeningType;
    int rows,columns;
    float income;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>screeningType;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    income=totalIncome(screeningType,rows,columns);
    cout<<income;
}
float totalIncome(string screeningType,int rows,int columns)
{
    float income;
    if(screeningType=="Premiere")
    {
        income=rows*columns*12;
    }
    else if(screeningType=="Normal")
    {
        income=rows*columns*7.5;
    }
    else if(screeningType=="Discount")
    {
        income=rows*columns*5;
    }
    return income;
}