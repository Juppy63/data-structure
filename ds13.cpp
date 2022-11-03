#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cin>>m>>n;
        int a[m][n];
    for( i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    int b[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>b[i][j];

    }
    int c[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];

    }
    for( i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<c[i][j];
        cout<<endl;
    }
}