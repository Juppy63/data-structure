#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
int a,b,k;
cin>>a>>b>>k;
long long bro=pow(a,b);
int m=k-1;
while (m--){
    bro/=10;
    }
bro=bro%10;
cout<<bro;

return 0;
}