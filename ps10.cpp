#include<iostream>
using namespace std;
 int main()
 {
    int  n;
    float sum=0;
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);}
       cout<<sum; 
    
 }