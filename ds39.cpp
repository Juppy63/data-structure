#include<iostream>
using namespace std;
#define MAXQUEUE 40
#define TRUE 1
#define FALSE 0
struct queue
{
    char item[MAXQUEUE];
    int front;
    int rear;
};
/*************************/


void intialise(struct queue *Q)
{
    Q->front=0;
    Q->rear=-1;
}
/*************************/
bool isempty(struct queue *Q)
{
    if(Q->rear - Q->front+1==0)
        return TRUE;
    else
        return FALSE;
}
/*************************/
char enqueue(struct queue *Q,char x)
{
    if(Q->rear==9)
    {
        cout<<"Queue Overflow"<<endl;
        exit(1);
    }
    Q->rear=Q->rear+1;
    Q->item[Q->rear]=x;
}
/*************************/
char dequeue(struct queue *Q)
{
    char x;
    if(isempty(Q))
    {
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }
    x=Q->item[Q->front];
    Q->front=Q->front+1;
    return x;
}
/*************************/

int main()
{
    char y;
    struct queue myQ;
    intialise(&myQ);
    enqueue(&myQ,'A');
    enqueue(&myQ,'B');
    enqueue(&myQ,'C');
    enqueue(&myQ,'D');
    enqueue(&myQ,'E');
    enqueue(&myQ,'F');
    y=dequeue(&myQ);
    cout<<y<<endl;
    y=dequeue(&myQ);
    cout<<y<<endl;
    y=dequeue(&myQ);
    cout<<y<<endl;
    y=dequeue(&myQ);
    cout<<y<<endl;
    y=dequeue(&myQ);
    cout<<y<<endl;
    y=dequeue(&myQ);
    cout<<y<<endl;





}