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
traverse(struct node **start)
{
    struct node *p;
    p=*start;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->next;
    }
}
void insend(struct node **start,int x)
{
    struct node *q,*p;
    q=(*start);
    if(q==NULL)
    {
        insbeg(start,x);
    }else{
    
    while(q->next!=NULL)
    {
        q=q->next;
    }
    
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
    }
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
    p=*start;
    struct node *q;
    q=NULL;
    while(p!=NULL && x>=p->info)
    {
        q=p;
        p=p->next;
    }
    if(q==NULL)
        insbeg(&(*start),x);
    else
        insaft(&q,x);
}
void merge(struct node **start1,struct node **start2)
{
    struct node *p,*q;
    struct node *start3;
    p=(*start1);
    q=(*start2);
    start3=NULL;
    
    while(p!=NULL && q!=NULL)
    {
        if (p->info < q->info)
        {
            insend(&start3,p->info);
            p=p->next;
        } 
        else
        {
            insend(&start3,q->info);
            q=q->next;
        }
    }
    while(p!=NULL)
    {
        insend(&start3,p->info);
        p=p->next;
    }
    while(q!=NULL)
    {
        insend(&start3,q->info);
        q=q->next;
    }
    traverse(&start3);
}
void Union(struct node **start1,struct node **start2)
{
    struct node *p,*q;
    struct node *start3;
    p=(*start1);
    q=(*start2);
    start3=NULL;
    
    while(p!=NULL && q!=NULL)
    {
        if (p->info < q->info)
        {
            insend(&start3,p->info);
            p=p->next;
        } 
        else if(p->info==q->info)
        {
            insend(&start3,p->info);
            q=q->next;
            p=p->next;
        }else{
            insend(&start3,q->info);
            q=q->next;
        }
        traverse(&start3);
    }
    while(p!=NULL)
    {
        insend(&start3,p->info);
        p=p->next;
    }
    while(q!=NULL)
    {
        insend(&start3,q->info);
        q=q->next;
    }
    traverse(&start3);
}

int main()
{
    struct node *start1,*start2;
    start1=NULL;
    start2=NULL;
    
    int i;
    int a[6]={2,10,1,5,15,12};
    int b[8]={12,5,3,6,2,8,11,17};
    for(i=0;i<=5;i++)
    {
        orderedins(&start1,a[i]);
    }
    for(i=0;i<=7;i++)
    {
        orderedins(&start2,b[i]);
    }
    traverse(&start1);
    cout<<endl;
    traverse(&start2);
    cout<<endl;
    merge(&start1,&start2);
    cout<<endl;
    Union(&start1,&start2);
    


}
