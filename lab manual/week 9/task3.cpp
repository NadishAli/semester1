#include<iostream>
using namespace std;
string nextLetter(string word);
main()
{
    string word,next;
    cout<<"Enter a string: ";
    getline(cin, word);
    next=nextLetter(word);
    cout<<"Shifted String: "<<next;
}
string nextLetter(string word)
{
    int i=0,asciCode;
    while(word[i]!='\0')
    {
        i++;
    }
    char part[i];
    for(int x=0;x<=i;x++)
    {
        part[x]=word[x];
    }
    for(int j=0;j<i;j++)
    {
        asciCode=part[j];
        if(asciCode!=32)
        {
        asciCode++;
        }
        if(asciCode>90 && asciCode<97)
        {
            asciCode=asciCode-26;
        }
        part[j]=asciCode;
    }
    return part;
}