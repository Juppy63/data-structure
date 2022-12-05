#include<iostream>
#include<malloc.h>
using namespace std;
void input(int *p,int n)
{
    for(int i=0;i<n;i++)
    cin>>*(p+i);
}
void output(int *p,int n)
{
    for(int i=0;i<n;i++)
    cout<<*(p+i)<<endl;
}
int main()
{
    int *p;
    int n;
    cin>>n;
    int i;
    p=(int *)malloc(n*sizeof(int));
    input(p,n);
    output(p,n);
}