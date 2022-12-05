#include<iostream>
using namespace std;
int main()
{
    int x;
    int *p;
    x=10;
    cout<<&x<<endl;
    p=&x;
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
}
