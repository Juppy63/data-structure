#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"enter info of a";
    cin>>m>>n;
    int a[m][n];
    for( i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    int p,q;
    cout<<"enter info of b";
    cin>>p>>q;
    int b[p][q];
    for( i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        cin>>b[i][j];
    }
        for( i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        cout<<b[i][j];
    cout<<endl;
    }
    
        for( i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<a[i][j];
    cout<<endl;
    }
    
}