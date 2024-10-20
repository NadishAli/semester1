#include<iostream>
#include<iomanip>
using namespace std;
float calculatePercentage();
int numCount;
float p1,p2,p3,p4,p5;
main()
{
    cout<<"Enter numbers count: ";
    cin>>numCount;
    calculatePercentage();
    cout<<setprecision(4)<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    cout<<p4<<"%"<<endl;
    cout<<p5<<"%"<<endl;
}
float calculatePercentage()
{
    for(int i=1;i<=numCount;i++)
    {
        int num;
        cout<<"Enter a number: ";
        cin>>num;
        if(num<200)
        {
            p1++;
        }
        else if(num>=200 && num<400)
        {
            p2++;
        }
        else if(num>=400 && num<600)
        {
            p3++;
        }
        else if(num>=600 && num<800)
        {
            p4++;
        }
        else if(num>=800 && num<1000)
        {
            p5++;
        }
    }
    p1=p1/numCount*100;
    p2=p2/numCount*100;
    p3=p3/numCount*100;
    p4=p4/numCount*100;
    p5=p5/numCount*100;
}
