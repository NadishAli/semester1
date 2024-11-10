#include<iostream>
using namespace std;
main()
{
    int price=500;
    string movies[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    string name;
    cout<<"Enter movie name: ";
    cin>>name;
    for(int i=0;i<5;i++)
    {
        if(movies[i]==name)
        {
            if(i%2!=0)
            {
                price=price-(price*5/100);
            }
            else if(i%2==0)
            {
                price=price-(price*10/100);
            }
            break;
        }         
    }
    cout<<"The price of the ticket is: "<<price;
}