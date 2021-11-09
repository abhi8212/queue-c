//emplementation of data in queue using linked list;
#include<stdio.h>
#include<stdlib.h>
//initialization of two box one for data and other for store addresss for next data;
struct node
{
    int data;
    struct node *next;
};
//creation of two pointer front will be fix and other will move;

struct node *front=0, *rear=0;
//creation of the function to emplement of new data;
void enqueue(int x)
{
    struct node *newnode;
    //creation of dynamic pointer to  point the nodes
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    //condition of store the first data;
    if(rear=front=0)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

//deletion of node;
void delete()
{
    struct node *temp;
    temp=front;
    if(front=rear=0)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("the delete node is %d\n",temp->data);
        front =front->next;
        free(temp);
    }
}
void peak()
{
    printf("the peak value in the node is %d\n",rear->data);
}
void display()
{
    struct node *temp;
    temp=front;
    if(front=rear=0)
    {
        printf("the queue is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

//main function
int main()
{
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    enqueue(10);
    delete();
    display();
    return 0;
}


