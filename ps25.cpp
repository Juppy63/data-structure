#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    int i=0,j=0;
    while(a[i]!='\0')
    {
        i++;

    }while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;

    }
    a[i]='\0';
    puts(a);
}
