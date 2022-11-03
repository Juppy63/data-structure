#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float a,b,x,y,p,q;
    float u,v,t,s;
    cin>>x>>a>>y>>b>>p>>q;
    u=a/x;
    v=b/y;
    t=p/x;
    s=q/y;
    if(u>t)     
    {
        cout<<"Decreased"<<endl;
    }
    else{
        cout<<"Increased"<<endl;
    }
    if(v>s){
        cout<<"Decreased"<<endl;
    }else{
        cout<<"Increased"<<endl;
    }
    return 0;
}
