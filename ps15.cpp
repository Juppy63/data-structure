#include<iostream>
using namespace std;
int power(int a,int b)
{
    int p=1,i;
    for(i=1;i<=b;i++)
    {
        p=p*a;
        
    }return p;
} int main(){
    int x;
    x=power(2,5);
    cout<<x;

}
    