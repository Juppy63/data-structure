#include<iostream>
using namespace std;
int main()
{
    int d,m,y,lp=0;
    cout<<"date"<<"month"<<"year";
    cin>> d>> m>> y;
    for(i=1;i<=y;i++)
    {
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        lp++;
    }
}