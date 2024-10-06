#include<iostream>
using namespace std;
string checkAlphabat(string alphabat);
main()
{
    string alphabat,result;
    cout<<"Enter a charactor (A/a): ";
    cin>>alphabat;
    result=checkAlphabat(alphabat);
    cout<<result;
    
}
string checkAlphabat(string alphabat)
{
    string ans;
    if(alphabat=="A")
    {
       ans="You have entered Capital A.";
       return ans;
    }
    else
    {
       ans="You have entered small a.";
        return ans;
    }
}