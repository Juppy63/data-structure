#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    float sum=0,f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+(pow(x,i))/f;

    }cout<<sum;
}