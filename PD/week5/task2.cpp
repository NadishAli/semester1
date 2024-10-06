#include<iostream>
using namespace std;
float calculateVolume(int length,int width,int height);
main()
{
    float length,width,height,volume;
    string unit;
    cout<<"Enter the length of the pyramid (in meters):  ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid(in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
    cin>>unit;
    volume=calculateVolume(length,width,height);
    if(unit=="milimeters")
    {
        volume=volume*1000;
        cout<<"The volume of the pyramid is : "<<volume;
    }
    if(unit=="centimeters")
    {
        volume=volume*100;
        cout<<"The volume of the pyramid is : "<<volume;
    }
    if(unit=="meters")
    {
        cout<<"The volume of the pyramid is : "<<volume;
    }
    if(unit=="kilometers")
    {
        volume=volume/1000;
        cout<<"The volume of the pyramid is : "<<volume;
    }
}
float calculateVolume(int length,int width,int height)
{
    float volume;
    volume=(length*width*height)/3;
    return volume;
}