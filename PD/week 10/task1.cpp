#include<iostream>
using namespace std;
main()
{
    int days,count;
    cout<<"Enter the number of days you want to enter: ";
    cin>>days;
    int distance[days];
    for(int i=0;i<days;i++)
    {
        cout<<"Enter the distance of Day "<<i+1<<" :";
        cin>>distance[i];
        if(distance[i]>distance[i-1] && i!=0)
        {
            count++;
        }
    }
    cout<<"The progress days are: "<<count;
}