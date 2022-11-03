#include<iostream>
using namespace std;
void catandmouse(int x,int y,int z)
{
    int a,b;
    a=x-z;
    b=y-z;
    if(a<0)
    {
        a=a*(-1);
    }
    if(b<0)
    {
        b=b*(-1);
    }
    if(a>b)
    {
        cout<<"Cat B";
    }else
    if(a<b)
    {
        cout<<"Cat A";
    }else{
        cout<<"Mouse C";
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    catandmouse(x,y,z);
}