#include<iostream>
using namespace std;
int findLargestNumber(int arrynum[],int num);
main()
{
    int num,largest;
    cout<<"Enter the number of elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" numbers, one per line:"<<endl;
    int arrynum[num];
    for(int i=0;i<num;i++)
    {
        cin>>arrynum[i];
    }
    largest=findLargestNumber(arrynum,num);
    cout<<"The largest number entered is: "<<largest;
}
int findLargestNumber(int arrynum[],int num)
{
    int largest=arrynum[0];
    for(int j=1;j<num;j++)
    {
        if(largest<arrynum[j])
        {
            largest=arrynum[j];
        }
    }
    return largest;
}