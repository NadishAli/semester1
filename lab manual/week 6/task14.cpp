#include<iostream>
using namespace std;
string calculateCost(float budget, float groupMembers, string catagory);
main()
{
    float budget,groupMembers;
    string catagory,result;
    cout<<"Enter the budget: ";
    cin>>budget;
    cout<<"Enter the catagory (VIP/Normal): ";
    cin>>catagory;
    cout<<"Enter the number of people in the group: ";
    cin>>groupMembers;
    result=calculateCost(budget,groupMembers,catagory);
    cout<<result;
}
string calculateCost(float budget, float groupMembers, string catagory)
{
    float cost,diff;
    string ans;
    if(groupMembers>=1 && groupMembers<=4)
    {
        budget=budget-(budget*75/100);
    }
    else if(groupMembers>=5 && groupMembers<=9)
    {
        budget=budget-(budget*60/100);
    }
    else if(groupMembers>=10 && groupMembers<=24)
    {
        budget=budget-(budget*50/100);
    }
    else if(groupMembers>=25 && groupMembers<=49)
    {
        budget=budget-(budget*40/100);
    }
    else if(groupMembers>=50)
    {
        budget=budget-(budget*25/100);
    }
    if(catagory=="VIP")
    {
        cost=groupMembers*499.99;
    }
    else if(catagory=="Normal")
    {
        cost=groupMembers*249.99;
    }
    diff=cost-budget;
    if(cost>budget)
    {
        ans="(Not enough money! You need " + to_string(diff) +" lava";
    }
    else if(cost<budget)
    {
        diff=diff*-1;
        ans="Yes! You have "+ to_string(diff) +" lava left.";
    }
    return ans;
}