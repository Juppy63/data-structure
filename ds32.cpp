#include<iostream>
#include<string.h>
#include<cmath>
#include<stdlib.h>
using namespace std;
#define STACKSIZE 40
#define TRUE 1
#define FALSE 0

int item[STACKSIZE];
int TOP1;
int TOP2;
void Initialize(){
    TOP1=-1;
    TOP2=STACKSIZE;
}
int IsEmpty1(){
    if(TOP1==-1)return TRUE;
    else return FALSE;
}
int IsEmpty2(){
    if(TOP2==STACKSIZE)
    return TRUE;
    else
    return FALSE;
}
int POP1(){
    int x;
    if(IsEmpty1()){
        cout<<"stack underflow";
        exit(1);
    }
    x = item[TOP1];
    TOP1--;
    return x;
}
int POP2(){
    int x;
    if(IsEmpty2()){
        cout<<"stack underflow";
        exit(1);
    }
    x = item[TOP2];
    TOP2++;
    return x;
}
void PUSH1(int x){
    if(TOP1==TOP2-1){
        cout<<"stack overflow";
        exit(1);
    }
    TOP1++;
    item[TOP1]=x;
}
void PUSH2(int x){
    if(TOP2==TOP1+1 ){
        cout<<"stack overflow";
        exit(1);
    }
    TOP2--;
    item[TOP2]=x;
}


int main()
{
    int x;
    Initialize();
    PUSH1(100);
    PUSH2(200);
    PUSH1(300);
    PUSH1(400);
    PUSH2(500);
    x=POP1();
    cout<<x<<endl;
    x=POP2();
    cout<<x<<endl;
    x=POP2();
    cout<<x<<endl;
    x=POP1();
    cout<<x<<endl;
    POP1();
    POP1();
    POP1();
    POP1();
    
}