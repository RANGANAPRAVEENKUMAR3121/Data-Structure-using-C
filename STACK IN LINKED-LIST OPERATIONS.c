#include<stdio.h>

typedef struct stack
{
    int data;
    struct stack *next;
}node;
node *top,*temp;
int push()
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
    return 0;
}
int pop()
{
        if(top==NULL)
        {
        printf("List is empty\n");
        }
        temp=top;
        printf("Deleted element is = %d\n",top->data);
        top=top->next;
        temp->next=NULL;
        free(temp);
    return 0;
}
int peep()
{
    if(top==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("top element is = %d\n",top->data);
    }
    return 0;
}
int display()
{
   temp=top;
   while(temp!=NULL)
   {
       printf("%d\t",temp->data);
       temp=temp->next;
   }
   printf("\n");
   return 0;
}

int main()
{
    int m;
    printf("STACK OPERATIONS\n");
    printf("===================\n");
    printf("enter '1' to push .\n");
    printf("enter '2' to pop .\n");
    printf("enter '3' to peep .\n");
    printf("enter '4' to display.\n");
    printf("enter '5' to EXIT.\n");
    do
    {
        printf("Enter your choice \n");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
                push();
                break;
        case 2:
                pop();
                break;
        case 3:
                peep();
                break;
        case 4:
                display();
                break;
        case 5:
                printf("EXIT");
                break;
        }
    }while(m!=5);
    return 0;
}
