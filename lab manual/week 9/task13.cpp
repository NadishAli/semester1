#include<iostream>
using namespace std;
void jazzifyChords(string chords[],int size);
int size;
main()
{
    cout<<"Enter the number of chords: ";
    cin>>size;
    cout<<"Enter "<<size<<" chords, one per line:"<<endl;
    string chord[size];
    for(int i=0;i<size;i++)
    {
        cin>>chord[i];
    }
    jazzifyChords(chord,size);
}
void jazzifyChords(string chords[],int size)
{
    cout<<"Jazzified chords: [";
    for(int i=0;i<size;i++)
    {
        cout<<chords[i]<<"7, ";
    }
    cout<<"]";
}