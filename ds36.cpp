#include<iostream>
using namespace std;
void traverse(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<endl;
    }
}
int main()
{
    int i;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    traverse(a,10);
}