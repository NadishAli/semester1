#include<iostream>
using namespace std;
void calculateDots(int num);
main()
{
    int num;
    cout<<"Enter number of triangle: ";
    cin>>num;
    calculateDots(num);
}
void calculateDots(int num)
{
    int dots;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            dots++;
        }
    }
    cout<<"Dots in the triangle: "<<dots;
}