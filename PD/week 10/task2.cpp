#include<iostream>
using namespace std;
int countWord(string word,char letter);
main()
{
    int size;
    int count;
    char letter;
    cout<<"Enter how many words you want to Enter: ";
    cin>>size;
    string word[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter word "<<i+1<<" : ";
        cin>>word[i];
    }
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
    for(int j=0;j<size;j++)
    {
        count+=countWord(word[j],letter);
    }
    cout<<"The letter "<<letter<<" shows up "<<count<<" times.";
}
int countWord(string word,char letter)
{
    int count;
    int i=0;
    while(word[i] !='\0')
    {
        if(word[i]==letter)
        {
            count++;
        }
        i++;
    }
    return count;
}