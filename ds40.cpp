#include<iostream>
using namespace std;
void PQInsertion(int A[],int *N,int x)
{
    int i=0;
    while(i<N && x>A[i])
    i++;
    ArrayInsertion(A,*N,i,x);
}
void ArrayInsertion(int A[],int *N,int i,int x) {
    int j;
    for(j=*N-1;j<i;j++)
    A[j+1]=A[j];

    A[i]=x;
    *N=*N+1;
}
int main() {
    int N,x;
    
    cin>>"enter no of elements:";
    cout>>&N;
    int A[N+1],B[N+1];
    for(int i=0 ; i<N ; i++)
    {
        cin>>&x;
        PQInsertion(A,&i,x);
    }
    PQDelete(A[],N) {
        
    }
    for(int i=0 ; i<N ; i++)
    {
        cout<<" ";
    }
    return 0;
}