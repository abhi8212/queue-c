#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int front ,rear,capacity;
    int *queue;
    queue(int c)
    {
        front=rear=0;
        capacity=c;
        queue= new int;
    }
    void enqueue(int data)
    {
        if(capacity==rear)
        {
            cout<<"queue is full\n";
        }
        else
        {
            queue[rear]==data;
            rear++;
        }
    }
    //for deletion
    void dequeue()
    {
        if(front==rear)
        {
            cout<<"queue is empty\n";
        }
          else
        {
            front++;
        }
     
    }
    void display()
 {
        if(capacity==rear)
    {
        cout<<"queue is full\n";
    }
    else
    {
        for(int i=front;i<rear;i++)
        {
            cout<<queue[i]<<" "<<"-->";
        }
    }
 }
  
};

int main()
{
    Queue q(4);
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    q.display();


}