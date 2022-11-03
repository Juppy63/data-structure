#include<iostream>
using namespace std;
void pali(int n)
{
    int rev=0,t;
    t=n;
    while(t!=0){
    int a=t%10;
    rev=rev*10+a;
    t=t/10;}
    if(rev==n){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
}

int main()
{
    int n;
    cin>>n;
    pali(n);
}
