#include<iostream>
using namespace std;
string calculateZodiacSign(int date,string month);
main()
{
    int date;
    string month,zodiacSign;
    cout<<"Enter the date of birth: ";
    cin>>date;
    cout<<"Enter the month of birth(e.g., January, Februaury): ";
    cin>>month;
    zodiacSign=calculateZodiacSign(date,month);
    cout<<"Zodiac Sign: "<<zodiacSign;
}
string calculateZodiacSign(int date,string month)
{
    string zodiacSign;
    if((month=="March" && date>=21)||(month=="April" && (date>=1 || date<=19)))
    {
        zodiacSign="Aries";
    }
    else if((month=="April" && date>=20)||(month=="May" && date<=20))
    {
        zodiacSign="Taurus";
    }
    else if((month=="May" && date>=21)||(month=="June" && date<=20))
    {
        zodiacSign="Gemini";
    }
    else if((month=="June" && date>=21)||(month=="July" && date<=22))
    {
        zodiacSign="Cancer";
    }
    else if((month=="July" && date>=23)||(month=="August" && date<=22))
    {
        zodiacSign="Leo";
    }
    else if((month=="August" && date>=23)||(month=="September" && date<=22))
    {
        zodiacSign="Virgo";
    }
    else if((month=="September" && date>=23)||(month=="October" && date<=22))
    {
        zodiacSign="Libra";
    }
    else if((month=="October" && date>=23)||(month=="November && date<=21"))
    {
        zodiacSign="Scorpio";
    }
    else if((month=="November" && date>=22)||(month=="December" && date<=21))
    {
        zodiacSign="Sagittarius";
    }
    else if((month=="December" && date>=22)||(month=="January" && date<=19))
    {
        zodiacSign="Capricon";
    }
    else if((month=="January" && date>=20)||(month=="February" && date<=18))
    {
        zodiacSign="Aquaries";
    }
    else if((month=="February" && date>=19)||(month=="March" && date<=20))
    {
        zodiacSign="Pisces";
    }
    return zodiacSign;
}