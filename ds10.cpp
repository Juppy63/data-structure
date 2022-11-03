#include<iostream>
using namespace std;
void diffrence(int A[],int m,int B[],int n)
{
    int i=0,j=0,k=0;
    int C[20];
    while(i<m&&j<n)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;

        }
        else
        {
            if(A[i]>B[j])
            {
                j++;

            }
            else
            {
                i++;
                k++;
            }
        }
    }
    while(i<m)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    for(i=0;i<=k;i++)
    {
        cout<<C[i]<<" ";
    }
}
int main()
{
    int A[10];
    int B[10];
    int m=0,n=0;
    int i=0,j=0;
    cout<<"enter the size of 1st set";
    cin>>m;
    cout<<"enter the elements of 1st set";
    for(i=0;i<=m-1;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the size of 2nd set";
    cin>>n;
    cout<<"enter the elements of 2nd set";
    for(j=0;j<=n-1;j++)
    {
        cin>>B[j];
    }
    diffrence(A,m,B,n);
    return 0;
}