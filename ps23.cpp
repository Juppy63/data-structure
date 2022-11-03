#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char n[20];
    int i=0,j=0,t,flag;
    cin>>n;
    
    while(n[i]!='\0')
    {
        i++;
    }
    cout<<i<<endl;
    i--;
    while(j<i)
    {
        if(n[j]!=n[i])
        {
            flag=1;
            break;
        }else{
            j++;
            i--;
        }
    }if(flag==1)
    {
        cout<<"not palindrome";
    }else{
        cout<<"palindrone";
    }
}