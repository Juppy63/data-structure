#include<iostream>
#include<climits>
using namespace std;


int partition(int a[],int low,int high)
{
    int i=low;
    int j=high+1;
    int pivot=a[low];
    int b;
    do
    {
        /* code */
        do
        {
            /* code */
            i++;
        } while (a[i]<pivot);
        do
        {
            /* code */
            j--;
        } while (a[j]>pivot);
        if(i<j)
        {
            b=a[j];
            a[j]=a[i];
            a[i]=b;
        }
        
        
    } while (i<j);
           b=a[low];
        a[low]=a[j];
        a[j]=b;
        return j;
    
    
    
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int j;
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}

int main()
{
    int a[11]={60,80,30,140,90,70,20,10,100,50};
    a[10]=__INT_MAX__;
    int i;
    quicksort(a,0,10);
    for(i=0;i<=9;i++)
    {
        cout<<a[i]<<" ";
    }
}