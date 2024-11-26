#include<iostream>
using namespace std;
main()
{
   string word,part;
   int indx,start;
   cout<<"Enter the word: ";
   getline(cin,word);
   int count=0;
   while(word[count] !='\0')
   {
    count++;
   }
   part=count;
   for(int i=count-1;i>=0;i--)
   {
      if(word[i]==' ')
      {
         indx=i;
         for(int j=indx;j<count;j++)
         {
            cout<<word[j];
         }
         count=indx-count;
      }
   }
   cout<<" ";
   for(int x=0;x<start;x++)
   {
      cout<<word[x];
      if(word[x]==' ')
      {
         break;
      }
   }
}