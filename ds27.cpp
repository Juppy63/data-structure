#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
/******/
int nearest_prime(int ts)
{   
    int i=0,j=0;
    int flag=0;
    for(i=ts;i>=2;i--)
    {
         for (j=2;j<=sqrt(i);j++) 
        {
            if (i%j==0)
                break;
        }
       if(j>sqrt(i))
            return i;
            
    }
    if (flag==1) 
        return 0;
    
    else
        return 1;

}
/*******************/
int hashed(int key,int ts)
{
    int np=0;
    int l=0;
    np=nearest_prime(ts);
    cout<<np<<endl;
    l=key%np;
    return l;
}


/********************/
int main()
{
    int key, ts;
    int n;
    int a[100];
    cin>>ts>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        a[i]=hashed(a[i],ts);
        cout<<a[i];
    }

    

}

