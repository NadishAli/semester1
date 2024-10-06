#include<iostream>
using namespace std;
float calculatePoolState(int volume,int flowRate1,int flowRate2,float workerleft);
main()
{
    int volume,flowRate1,flowRate2;
    float workerLeft;
    cout<<"Enter Volume of the pool in liters: ";
    cin>>volume;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>flowRate1;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>>flowRate2;
    cout<<"Enter hours that the worker is absent: ";
    cin>>workerLeft;
    calculatePoolState(volume,flowRate1,flowRate2,workerLeft);
}
float calculatePoolState(int volume,int flowRate1,int flowRate2,float workerleft)
{
    float volumeFilled,ratio,pipe1,pipe2;
    volumeFilled=(flowRate1*workerleft)+(flowRate2*workerleft);
    pipe1=(flowRate1*workerleft)/volumeFilled*100;
    pipe2=(flowRate2*workerleft)/volumeFilled*100;
    if(volumeFilled<volume)
    {
        ratio=volumeFilled/volume*100;
        cout<<"The pool is "<<ratio<<"% full.Pipe 1:"<<pipe1<<"%.Pipe 2:"<<pipe2<<"%.";
    }
    if(volumeFilled>volume)
    {
        int diff;
        diff=volumeFilled-volume;
        cout<<"For "<<workerleft<<" hours, the pool overflows with "<<diff<<" liters.";
    }
}