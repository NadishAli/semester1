#include<iostream>
using namespace std;
main()
{
    string word1,word2;
    cout<<"Enter the first string: ";
    cin>>word1;
    cout<<"Enter the second string: ";
    cin>>word2;
    int size1=0,size2,count=0;
    while(word1[size1]!='\0')
    {
        size1++;
    }
    while(word2[size2]!='\0')
    {
        size2++;
    }
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(word1[i]==word2[j])
            {
                count++;
                break;;
            }
        }
    }
    cout<<count;
}