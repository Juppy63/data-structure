#include<iostream>
using namespace std;
int main()
{
    char s[20];
    gets(s);
    int i=0,flag=0;
    if(s[0]=='_'||(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||(s[0]>='0'&&s[0]<='9'))
    {
        i=1;
        while(s[i]!='\0')
        {
            if((s[i]=='_'&&s[i]=='&')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
            {
                i++;
            }else
            {
                flag=1;
                break;
            }
        }
    }
    else{
        flag=1;
    }
    if(flag==1&&i<=32)
    {
        cout<<"invalid";
    }
    else{
        cout<<"valid";
    }
}