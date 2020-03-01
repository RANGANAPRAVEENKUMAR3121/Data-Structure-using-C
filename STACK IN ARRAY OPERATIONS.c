#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=0;
int push()
{
    int ele=0;
    if(top==SIZE)
    {
        printf("List is full.\n");
    }
    else
    {
        top=top+1;
        printf("Enter element:");
        scanf("%d",&ele);
        stack[top]=ele;
    }
    return 0;
}
int pop()
{
    if(top==0)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("Deleted element is : %d\n",stack[top]);
        top=top-1;
    }
    return 0;
}
int peep()
{
    if(top==0)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("top element is : %d\n",stack[top]);
    }
    return 0;
}
int display()
{
    int i;
    for(i=top;i>0;i--)
    {
            printf("%d\t",stack[i]);
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
