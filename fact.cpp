#include<iostream>
using namespace std;
int main()
{ 
    int p=1,n;
    cout<<"enter a no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        p*=i;
        
    }
    cout<<"fact of no is="<<p;
    return 0;
}