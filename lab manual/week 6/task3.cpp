#include<iostream>
using namespace std;
float calculatePerimeter(char shape,float value);
main()
{
    char shape;
    float value,result;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>shape;
    cout<<"Enter the value: ";
    cin>>value;
    result=calculatePerimeter(shape,value);
    cout<<"The perimeter is: "<<result;
}
float calculatePerimeter(char shape,float value)
{
    float perimeter;
    if(shape=='s')
    {
        perimeter=4*value;
    }
    else if(shape=='c')
    {
        perimeter=6.28*value;
    }
    else if(shape=='t')
    {
        perimeter=3*value;
    }
    else if(shape=='h')
    {
        perimeter=6*value;
    }
    return perimeter;
}