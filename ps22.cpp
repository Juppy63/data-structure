#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char n[20];
    int i=0,j=0,t;
    cin>>n;
    
    while(n[i]!='\0')
    {
        i++;
    }
    
    i--;
    while(j<i)
    {
        t=n[i];
        n[i]=n[j];
        n[j]=t;
        j++;
        i--;
    }cout<<n;
}