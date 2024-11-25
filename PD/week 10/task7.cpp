#include<iostream>
using namespace std;
main()
{
   string word,part;
   cout<<"Enter the word: ";
   getline(cin,word);
   int count=0;
   while(word[count] !='\0')
   {
    count++;
   }
   for(int i=count-1;i>=0;i--)
   {
    cout<<word[i];
   }
}