#include<iostream>
#include<bits/stdc++.h>
#define STACKSIZE (10) 
#define TRUE 1
#define FALSE 0
struct Stack
{
    int item(STACKSIZE);
    int TOP;

};
/***********************/
struct Stack S;
/***********************/
void Initialise()
{
    S.top=-1;
}
/***********************/
int isempty(Stack S){
if(S.top==-1)
{
    return true;

}else{
    return false;
}}
/***********************/
int push(Stack S,x)
{
    int x;
if (S.top==STACKSIZE-1)
{
    cout<<"stack overflow"<<endl;
}
exit(1)
S.top=S.top+1;
x=S.item[S.top];
}
int pop(Stack S)
{
    int x;
    if(isempty(S))
    {
        cout<<"stack underflow"<<endl;
    }
    exit(1)
    x=S.item(S.top);
    S.top=S.top-1;
    return x;
}
int main()
{
    int x;
    push(100);
    push(200);
    cout<<"stack:=>"<<x;

}
