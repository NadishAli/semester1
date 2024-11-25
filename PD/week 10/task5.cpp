#include<iostream>
using namespace std;
main()
{
    int num,size,count=0;
    int volume=1,result=0;
    cout<<"Enter the number of boxes: ";
    cin>>num;
    size=num*3;
    int array[size];
    cout<<"Enter the measurements of the boxes"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<3;j++)
        {
            volume*=array[count];
            count++;
        }
        result+=volume;
        volume=1;
    }
    cout<<"The total volume is "<<result;
}