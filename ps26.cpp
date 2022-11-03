#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20];
    cin>>a;
    int i=0;
    while(a[i]!='\0')
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a[j];
        }
        cout<<" "<<endl;
        i++;
        
    }
}
