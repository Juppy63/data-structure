#include<iostream>
using namespace std;
float vol(int r)
{
   float v=(4.0/3)*(3.14)*r*r*r;
    return v;

}
int main()
{
    
    cout<<vol(7);
}
