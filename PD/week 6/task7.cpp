#include<iostream>
using namespace std;
string checkStudentStatus(int examHour,int examMinutes,int hour,int minutes);
int timeminutes,timehour;
main()
{
    int  examHour,examMinutes,hour,minutes;
    string result;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examHour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examMinutes;
    cout<<"Enter Student hour of arrival: ";
    cin>>hour;
    cout<<"Enter Student minutes of arrival: ";
    cin>>minutes;
    result=checkStudentStatus(examHour,examMinutes,hour,minutes);
    cout<<result<<endl;
    if(result=="Early")
    {
        cout<<timehour<<":"<<timeminutes<<" hours Before the exam.";
    }
}
string checkStudentStatus(int examHour,int examMinutes,int hour,int minutes)
{
    string ans;
    int examTime,studentTime,diff;
    examTime=(examHour*60)+examMinutes;
    studentTime=(hour*60)+minutes;
    diff=examTime-studentTime;
    timeminutes=diff%60;
    timehour=diff/60;
    if(diff==0 ||diff<30)
    {
        ans="On Time";
    }
    else if(diff>30)
    {
        ans="Early";
    }
    else if(studentTime>examTime)
    {
        ans="Late";
    }
    return ans;
}