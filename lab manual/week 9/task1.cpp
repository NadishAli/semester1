#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    int i=0;
    while(word[i]!='\0')
    {
        cout<<word[i]<<" found at position "<<i<<endl;
        i++;
    }
}
