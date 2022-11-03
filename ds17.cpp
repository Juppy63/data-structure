#include<iostream>
using namespace std;
int main()
{
    int a[10]={5,10,15,20,25,30,35,40,45,50};
    int mid,low=0,high=9,n;
    cout<<"enter the number";
    cin>>n;
    
    while(low<=high)
    {
       mid=(low+high)/2;       
        if(a[mid]==n)
        {
           cout<< mid;
           break;
    }else
        if(n<a[mid])
        {
            high=mid-1;
        }
        else
            low=mid+1;
    }

return -1;
}