#include<iostream>
#include<math.h>
using namespace std;
void prime(int n)
{
    int i,count=0;
    int x;
    x=sqrt(n);
    for(i=2;i<=x;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<"prime";

    }else{
        cout<<"not prime";
    }

}
int main()
{
    int n;
    cin>>n;
    prime(n);
}