#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,i;
    cout<< a << b;
    for(int i=2;i<n;i++)
    {
      i=a+b;
      cout<< i;
      a=b;
      b=i;

    }
    return 0;

}