#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int info;
    struct node *next;
};

struct node *getnode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
insbeg(struct node **start,int x)
{
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
traverse(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->next;
    }
}
void insend(struct node **start,int x)
{
    struct node *q,*p;
    q=*start;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
}

void insaft(struct node **q,int x)
{
    struct node *p,*r;
    p=getnode();
    p->info=x;
    r=(*q)->next;
    p->next=r;
    (*q)->next=p;
}
delbeg(struct node **start)
{
    int x;
    struct node *p;
    p=*start;
    x=p->info;
    (*start)=(*start)->next;
    free(p);
    return x;
}
delend(struct node **start)
{
    int x;
    struct node *p,*q;
    p=*start;
    q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}
int delafter(struct node **p)
{
    int x;
    struct node *q,*r;
    q=(*p)->next;
    r=q->next;
    (*p)->next=r;
    x=q->info;
    free(q);
    return x;

}
void orderedins(struct node **start,int x)
{
    struct node *p;
    p=start;
    struct node *q;
    q=NULL;
    while(p!=NULL && x>=p->info)
    {
        q=p;
        p=p->next;
    }
    if(q==NULL)
        insbeg(&(start),x);
    else
        insaft(&q,x);
}

int main()
{
    struct node *start;
    start=NULL;
    insbeg(&start,100);
    insbeg(&start,200);
    insbeg(&start,300);
    insbeg(&start,400);
    insbeg(&start,500);
    insbeg(&start,600);
    insbeg(&start,700);
    insbeg(&start,800);
    insend(&start,10);
    insend(&start,20);
    insend(&start,30);
    traverse(start);
    cout<<endl;
    int x=delbeg(&start);
    cout<<endl;
    traverse(start);
    cout<<endl<<"the deleted element is:->"<<x<<endl;
    int y=delend(&start);
    cout<<endl;
    traverse(start);
    cout<<endl<<"the deleted element is:->"<<y<<endl;
    int z=delafter(&start);
    cout<<endl;
    traverse(start);
    cout<<endl<<"the deleted element is:->"<<z<<endl;

}
