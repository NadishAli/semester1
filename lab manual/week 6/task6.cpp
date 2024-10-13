 #include<iostream>
using namespace std;
float calculateDiscount(string day,string month,int amount);
main()
{
    string day,month;
    float amount,payableAmount;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    payableAmount=calculateDiscount(day,month,amount);
    cout<<"Payable amount after discount: "<<payableAmount;
}
float calculateDiscount(string day,string month,int amount)
{
    float disc=amount;
    if(month=="October" || day=="Sunday")
    {
        disc=amount-(amount*10/100);
    }
    return disc;
}