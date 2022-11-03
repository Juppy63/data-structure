#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter an alphabet";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<< ch<<"alphabet is a vowel";

    }
    else
    {
        cout<<ch<<"alphabet is cosonent";
    }
}