#include<stdio.h>
#define N 10
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(front==rear==-1)
    {
        front =rear=0;
        queue[front]=x;
    }
    else if((rear+1)%N==front)
    {
       printf("queue is full\n");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }


}
void delete()
{
    if(front==rear==-1)
    {
        printf("queue is empty\n");
    }
    else if(front ==rear)
    {
        printf(" this is the delete data%d\n",queue[front]);
        front=rear=0;
        
    }
    else
    {
        printf(" this is the delete dadta %d\n",queue[front]);
        front=(front+1)%N;

    }
}
void display()
{
    int i=front;
    if(front ==rear==-1)
    {
        printf("queue is empty\n");
    }
    else{
        while(i!=rear)
        {
            printf("%d\n",queue[i]);
            i=(i+1)%N;

        }
        printf("%d\n",queue[rear]);
    }
}
void main()
{
   enqueue(5);
    enqueue(8);
    enqueue(9);
    enqueue(7);
    display();
    delete();
    display();
}