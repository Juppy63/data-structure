#include<iostream>
using namespace std;
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;}
        return s;
    }

    int main()
    {
    int n,x;
    cin>>n;
    x=sum(n);
    cout<<x;
    return 0;
}