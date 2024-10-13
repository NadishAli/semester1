#include<iostream>
using namespace std;
string calculateGrade(float percentage);
main()
{
    float english,math,chemistry,socialScience,biology;
    string name,grade;
    float percentage;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>english;
    cout<<"Enter marks for Maths: ";
    cin>>math;
    cout<<"Enter marks for Chemistry: ";
    cin>>chemistry;
    cout<<"Enter marks for Social Science: ";
    cin>>socialScience;
    cout<<"Enter marks for Biology: ";
    cin>>biology;
    percentage=(english+math+chemistry+socialScience+biology)/500*100;
    grade=calculateGrade(percentage);
    cout<<"Student Name: "<<name<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
}
string calculateGrade(float percentage)
{
    string grade;
    if(percentage>=90)
    {
    grade="A+";
    }
    else if(percentage>=80 && percentage<90)
    {
        grade="A";
    }
    else if(percentage>=70 && percentage<80)
    {
        grade="B+";
    }
    else if(percentage>=60 && percentage<70)
    {
        grade="B";
    }
    else if(percentage>=50 && percentage<60)
    {
        grade="C";
    }
    else if(percentage>=40 && percentage<50)
    {
        grade="D";
    }
    else if(percentage<40)
    {
        grade="F";
    }
    return grade;
}
