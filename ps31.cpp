#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    float d;
    float e;
    cin>>a>>b>>c;
    float x1,x2;
    d=(b*b)-4*(a*c);
    e=-b/(2*a);
    float g=sqrt(d);
    float f=g/(2*a);
    if(d>0)
    {
        cout<<"Real and Distinct"<<endl;
        x1=(-b+ sqrt(d))/(2*a);
        x2=(-b- sqrt(d))/(2*a);
        cout<<x1<<endl;
        cout<<x2;
    }
    else
        if(d==0)
        {
            cout<<"Real and Equal"<<endl;
            x1=(-b)/(2*a);
            x2=x1;
        cout<<x1<<endl;
        cout<<x2;
        }
            else 
        {
            cout<<"Imaginary and Distinct"<<endl;
            cout<<e<<'+'<<f<<'i'<<endl;
            cout<<e<<'-'<<f<<'i'<<endl;


        }

}