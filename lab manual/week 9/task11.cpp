#include<iostream>
using namespace std;
bool removeVowels(string word);
int i=0;
main()
{
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);
    cout<<"String with vowels removed: ";
    while(word[i]!='\0')
    {
        if(!removeVowels(word))
        {
            cout<<word[i];
        }
        i++;
    }
}
bool removeVowels(string word)
{
    bool result=false;
    string vowels="aeiouAEIOU";
    string vowelsRemoved;
        for(int j=0;j<10;j++)
        {
            if(word[i]==vowels[j])
            {
                result=true;
            }
        }
    return result;
}
