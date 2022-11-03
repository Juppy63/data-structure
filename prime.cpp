#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter a no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {if(n%i==0)
    {
        count++;
    }

    }
    if(count==2)
    {
        cout<<"number is prime"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }

    return 0;

}