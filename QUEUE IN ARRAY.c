#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=0;
int rear=0;
void enque()
{
    int ele;

    if(rear==SIZE)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear++;
        printf("Enter element:");
        scanf("%d",&ele);
        queue[rear]=ele;
        if(front==0)
        {
            front++;
        }
    }
}
void deque()
{
    if(rear==0 && front==0)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        printf("Deleted element is = %d\n",queue[front]);
        front=0;
        rear=0;
    }
    else
    {
        printf("Deleted element is = %d\n",queue[front]);
        front++;
    }
}
int main()
{
    int m;
    printf("QUEUE OPERATIONS\n");
    printf("=================\n");
    printf("Enter '1' to push elements.\n");
    printf("Enter '2' to pop elements.\n");
    printf("Enter '3' to EXIT.\n");
    do
    {
        printf("Enter your choice:");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
                enque();
                break;
        case 2:
                deque();
                break;
        case 3:
                printf("EXIT");
                break;
        }
    }while(m!=3);
return 0;
}
