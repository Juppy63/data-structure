#include<iostream>
#include<math.h>
using namespace std;
int prime(int n)
{
    int DAT[1001]={0};
    int x=sqrt(n);
    for(int i=2;i<=x;i++)
    {
        if (DAT[i]==0)
        for(int j=i*i;j<=n;j=j+i)
        {
            DAT[j]=1;
        }
    }
        for (int i = 2; i <= n; i++)
    {
        if (DAT[i] == 0)
            cout << i << " ";}

}


int main()
{
    int n;
    cin>>n;
    prime(n);

}