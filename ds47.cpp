#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int coeff;
    int exp;
    struct node *next;
};

struct node *getnode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int c,int e)
{
    struct node *p;
    p=getnode();
    p->coeff=c;
    p->exp=e;
    p->next=*start;
    *start=p;
}
int traverse(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        cout<<p->coeff<<"x^"<<p->exp<<"+";
        p=p->next;
        
    }
}
void insend(struct node **start,int c,int e)
{
    struct node *q,*p;
    q=*start;
    if(q==NULL)
    {
        insbeg(&(*start),c,e);
    }
    else{
        while(q->next!=NULL)
        {
            q=q->next;
        }
        p=getnode();
        p->coeff=c;
        p->exp=e;
        p->next=NULL;
        q->next=p;
    }
}




int  polynomialadd(struct node **poly1 ,struct node **poly2)
{
    struct node *p,*q;
    struct node *poly3;
    poly3=NULL;
    p=(*poly1);
    q=(*poly2);
    while(p!=NULL && q!=NULL)
    {
        if(p->exp==q->exp)
        {
            insend(&poly3,p->coeff+q->coeff,p->exp);
            p=p->next;
            q=q->next;
        }
        else
            if(p->exp > q->exp)
            {
                insend(&poly3,p->coeff,p->exp);
                p=p->next;
            }else{
                insend(&poly3,q->coeff,q->exp);
                q=q->next;
            }
        
    }
    while(p!=NULL)
    {
        insend(&poly3,p->coeff,p->exp);
        p=p->next;
    }
    while(q!=NULL)
    {
        insend(&poly3,q->coeff,p->exp);
        q=q->next;
    }
    cout<<poly3;
}


int main()
{
    struct node*poly1;
    poly1=NULL;
    struct node*poly2;
    poly2=NULL;
    struct node*poly3;
    poly3=NULL;
    insend(&poly1,2,2);
    insend(&poly1,3,3);
    insend(&poly1,4,4);
    insend(&poly1,5,5);
    insend(&poly1,6,6);
    traverse(poly1);
    cout<<endl;
    insend(&poly2,2,2);
    insend(&poly2,3,3);
    insend(&poly2,4,4);
    insend(&poly2,5,5);
    insend(&poly2,6,6);
    traverse(poly2);
}