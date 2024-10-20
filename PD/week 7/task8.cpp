#include<iostream>
using namespace std;
void calculatePrice(int count);
int bus=0,truck=0,train=0;
main()
{
    int count;
    int total;
    float totalPrice;
    float busPercent,truckPercent,trainPercent;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>count;
    calculatePrice(count);
    total=bus+truck+train;
    totalPrice=(bus*200)+(truck*175)+(train*120);
    totalPrice=totalPrice/total;
    cout<<totalPrice<<endl;
    busPercent=(bus*100)/total;
    cout<<busPercent<<"%"<<endl;
    truckPercent=(truck*100)/total;
    cout<<truckPercent<<"%"<<endl;
    trainPercent=(train*100)/total;
    cout<<trainPercent<<"%"<<endl;
}
void calculatePrice(int count)
{
    int weight,total;
    int totalPrice;
    float average;
    for(int i=1;i<=count;i++)
    {
        cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin>>weight;
        if(weight<=3)
        {
            bus=bus+weight;
        }
        else if(weight>3 && weight<11)
        {
            truck=truck+weight;
        }
        else if(weight>11)
        {
            train=train=weight;
        }
    }
}