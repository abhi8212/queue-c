#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdlib.h>
#include<math.h>
#define N 10
int front =-1;
int rear =-1;
int deque[10];
//inserting of the elements from front side;

void enquefront(int x)
{
    
    //condition when queue is full ;
    if(front==0 && rear==N-1 || front == rear+1 )
    {
        printf("queue is full");
    }
    //to insert first element when queue is empty;
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[front]=x;
    }
    //to insert the from front side the this condition should use;
    else if(front==0)
    {
        front = N-1;
        deque[front]=x;

    }
    //when the second elements is insert at last index and another elements is insert;
    else
    {
         front--;
        deque[front]=x;
       
    }


}
//to delete the elements from the sides
void enquerear(int x)
{
    if(front==0 && rear==N-1 || front ==rear+1)
    {
        printf("queue is full");
    }
    else if(front ==-1 && rear ==-1)
    {
        front=rear=0;
        deque[rear]=x;
    }
    else
    {
        rear++;
        deque[rear]=x;
    }
    

}
//to display the queue;
void display()
{
    int i=front;
    if(front ==-1 && rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("the queue is\n ");
        while(i!=rear)
        {
            printf("%d\n",deque[i]);
            //this technique is used in the circular queue to again 0th position;
             i=(i+1)%N;
        }
        printf("%d\n",deque[rear]);
       
    }
}

void deletefront()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");
    }
    else if(front==0 && rear==0)
    {
        printf("the delete element is %d",deque[front]);
        front=rear=-1;
    }
    else if(front==N-1){
        printf("the delete element is %d",deque[front]);

    }
    else
    {
        printf("the element is %d",deque[front]);
        front++;
    }
}
void deleterear()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");
    }
    else if(rear==0)
    {
        printf("the element is %d\n",deque[rear]);
        rear=N-1;

    }
    else if(front==rear){
        printf("the delete element is %d",deque[rear]);
        rear=-1;
    }
    else{
        printf("the delete element is %d",deque[rear]);
        rear--;
    }
}
int main()
{
    enquefront(1);
    enquefront(2);
    enquefront(3);
    enquefront(4);
    enquerear(56);
    enquerear(9);
    enquerear(50);
    deletefront();
    deleterear();
    
    


    display();
    return 0;
}