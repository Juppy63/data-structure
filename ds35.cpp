#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int *p;
    p=&a[0];
    for(i=0;i<10;i++)
    {
        cout<<*(p+i)<<endl;
    }
    
}