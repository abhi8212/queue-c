#include<stdio.h>
#include<stdlib.h>

// declaration queue
struct arrayqueue
{
    int front, rear;
    int capacity;
    int *array;
};
//create queue
struct arrayqueue* createqueue(int capacity)
{
    struct arrayqueue *Q=malloc(sizeof(struct arrayqueue));
    if(!Q)
    {
        return NULL;
    }
    Q->capacity=capacity;
    Q->front=Q->rear=-1;
    Q->array=malloc(Q->capacity*sizeof(int));
    if(!Q->array)
    {
        return NULL;
    }
    return Q;
    
}
//to check the queue is empty or not;

int isemptyqueue(struct arrayqueue *Q)
{
    return (Q->front==-1);
}

//to check the queue is full or not;
int isfullqueue(struct arrayqueue *Q)
{
    return (Q->rear+1)%Q->capacity==Q->front;
}
//how many element are inserted;
int queuesize(struct arrayqueue *Q)
{
    return (Q->capacity+Q->rear+1)%Q->capacity;

}

//insert en element in the queue;
void enqueue(struct arrayqueue *Q,int value)
{
    if(isfullqueue(Q))
    {
        printf("overflow\n");
    }
  
    else
    {
        Q->rear=(Q->rear+1)%Q->capacity;
        Q->array[Q->rear]=value;
    }

    if(Q->front==-1)
    {
        Q->front=Q->rear;
    }

}

//deletion of the element;
int dequeue(struct arrayqueue* Q)
{
    int data;
    if(isemptyqueue(Q))
    {
        printf("it is empty\n");
     }
  else
  {
      data=Q->array[Q->front];

  }
  if(Q->front==Q->rear)
  {
      Q->front=-1;
  }
  else
  {
      Q->front=(Q->front+1)%Q->capacity;
  }
  return data;

}
//deletequeue whole data;
// void deletequeue(struct arrayqueue *Q)
// {
//     if(Q)
//     {
//         if(Q->array)
//         {
//             free(Q->array);
//         }
//         free(Q);

//     }
// }
//void print;
void print(struct arrayqueue *Q)
{
    int i=Q->front;
    if(isemptyqueue(Q))
    {
        printf("it is empty\n");
    }
    else
    {
        while(i!=Q->rear)
        {
            printf("%d ",Q->array[i]);
            i=(i+1)%Q->capacity;
        }
        printf("%d ",Q->array[Q->rear]);
        printf("\n");
    }
}


//main function;
int main()

{
   struct arrayqueue *q1=createqueue(7);
    enqueue(q1,1);
    enqueue(q1,2);
    enqueue(q1,3);
    enqueue(q1,4);
    print(q1);
    dequeue(q1);
    print(q1);



}