#include<iostream>

#include<string.h>
using namespace std;
int main()
{
    char a[20];
    int i=0,k=0,j=0;
    gets(a);
    int x=strlen(a);
    for(i=0;i<=x;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<a[(x-1)-j];
        } 
        cout<<" "<<endl;
    }
    return 0;
}