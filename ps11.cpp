#include<iostream>
using namespace std;
int main()
{
    int n;
    float f=1,sum=0;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+(1.0/f);
    }cout<<sum;
}