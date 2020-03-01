#include<stdio.h>
typedef struct Queue
{
    int data;
    struct Queue *next;
}node;
node *temp,*front,*rear;
void enque()
{
    node *ptr;
    ptr=(node *) malloc (sizeof(node));
    printf("enter element:");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if(front==0 && rear==0)
    {
        front=ptr;
        rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
}
void deque()
{
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        temp=front;
        printf("Deleted element is = %d\n",front->data);
        front=front->next;
        temp->next=NULL;
        free(temp);
    }
}
void display()
{
    if(front==0 && rear==0)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
int main()
{
    int m;
    printf("QUEUE OPERATIONS\n");
    printf("=================\n");
    printf("Enter '1' to push element.\n");
    printf("Enter '2' to pop element.\n");
    printf("Enter '3' to display elements.\n");
    printf("Enter '4' to EXIT.\n");
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
                display();
                break;
        case 4:
                printf("EXIT");
                break;
        }
    }while(m!=4);
return 0;
}
