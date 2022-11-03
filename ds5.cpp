#include<iostream>
using namespace std;
int main()
{
int a[5]={16,57,45,22,34},max=0;
for(int i=0;i<5;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
}
cout<<max;
}