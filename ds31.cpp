#include<iostream>
#include<cmath>
#include<string.h>
#include <stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
using namespace std;
struct stack{
    int item[STACKSIZE];
    int TOP;
};
/*********/
struct stack s;
/*******/
initialise(){
    s.TOP=-1;
}
/************/
int isempty(){
    if (s.TOP==-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
/************/
 void push(int x){
    if(s.TOP==STACKSIZE-1){
        cout<<"stack overflow";
        exit(1);
    }
    s.TOP=s.TOP+1;
    s.item[s.TOP]=x;
}
/************/
int  pop(){
    if (isempty()){
        cout<<"stack underflow";
        exit(1);
    }
    int x=s.item[s.TOP];
    s.TOP=s.TOP-1;
    return x;
}
/************/
int stacktop(){
    int x=s.item[s.TOP];
    return x;
}

/************/
int Evaluate(int a,int b,char op){
    switch(op){
        case '+': return a+b;
        case '*': return a*b;
        case '-': return a-b;
        case '/': return a/b;
        case '^' : return pow(a,b);
    }
}
/********************/
void strreva(char n[])
{
    

    char n[20];
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
/**********************/
int main(){
    int x,i=0,val,b,a;
    char PS[20];
    char symb;
    initialise();
    strreva(PS);
    cin>>PS;
    while(PS[i]!='\0'){
        symb=PS[i];
        if(symb>='0'&&symb<='9'){
            push(symb-'0');
        }
        else{
             a= pop();
             b= pop();
            val =Evaluate(a,b,symb);
            push(val);
        }
        i++;
    }
    x=pop();
    cout<<x;
    return 0;
}