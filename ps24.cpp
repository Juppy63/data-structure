#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char n[20],m[20];
    gets(n);
    gets(m);
    int a;
    a=strcmp(n,m);
    if(a==0)
    {
        cout<<"yes";

    }else{
        cout<<"no";
    }
}