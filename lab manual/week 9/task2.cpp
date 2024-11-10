#include<iostream>
using namespace std;
string reverseWord(string word);
main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Reverse word: ";
    reverseWord(word);

}
string reverseWord(string word)
{
    int i=0,j=0;
    while(word[i]!='\0')
    {
        i++;
    }
    while(i>=0)
    {
        cout<<word[i];
        i--;
    }
}