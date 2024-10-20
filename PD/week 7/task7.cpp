#include<iostream>
using  namespace std;
void hospital(int days);
main()
{
    int days;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
    hospital(days);
}
void hospital(int days)
{
    int count,treated=0,untreated=0,doctor=7;
    for(int i=1;i<=days;i++)
    {
        cout<<"Number of patients who visited hospital on Day "<<i<<": ";
        cin>>count;
        if(count>7)
        {
            treated=doctor+treated;
            untreated=(count-doctor)+untreated;
            if(treated<untreated)
            {
                doctor++;
            }
        }
        else
        {
            treated=treated+count;
        }
    }
    cout<<"The number of treated patients: "<<treated<<endl;
    cout<<"The number of untreares patients: "<<untreated;
}