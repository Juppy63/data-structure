#include<iostream>
#include<string.h>
#include<cmath>
#include<stdlib.h>
using namespace std;
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct Stack
{
    int item[STACKSIZE];
    int TOP;
};
struct Stack s;
int IsEmpty(){
    if(s.TOP==-1)return TRUE;
    else return FALSE;
}
int POP(){
    if(IsEmpty()){
        cout<<"stack underflow";
        exit(1);
    }
    int x = s.item[s.TOP];
    s.TOP--;
    return x;
}
void PUSH(int x){
    if(s.TOP==STACKSIZE-1){
        cout<<"stack overflow";
        exit(1);
    }
    s.TOP++;
    s.item[s.TOP]=x;
}
void Initialize(){
    s.TOP=-1;
}

int stackTOP(){
    int x= s.item[s.TOP];
    return x;
}
int Evaluate(int a,int b,char op){
    
    switch(op){
        case '+': return a+b;
        case '*': return a*b;
        case '-': return a-b;
        case '/': return a/b;
        case '^': return pow(a,b);
    }
}
void strrev(string n[])
{
    

    string n[20];
    int i=0,j=0,t;
    cin>>n;
    
    while(n[i]!='\0')
    {
        i++;
    }
    
    i--;
    while(j<i)
    {
        t=n[i];
        n[i]=n[j];
        n[j]=t;
        j++;
        i--;
    }

}

int main(){
    int x,i=0,val,b,a;
    char PS[20];
    char symb;
    Initialize();
    strrev(x);
    cin>>PS;
    while(PS[i]!='\0'){
        symb=PS[i];
        if(symb>='0'&&symb<='9'){
            PUSH(symb-'0');
        }
        else{
             a= POP();
             b = POP();
            val =Evaluate(a,b,symb);
            PUSH(val);
        }
        i++;
    }
    x=POP();
    cout<<x;
    return 0;
}