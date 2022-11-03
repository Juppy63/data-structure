#include<iostream>
using namespace std;
int main()
{
    int c=1,n,i,sum=0,sign=1;
    cin>>n;
    for( i=1;i<=n;i++)
    {
        c=c*i;
        sum=sum+c*sign;
        sign=sign*-1;
    }cout<<sum;
}