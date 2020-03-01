#include<stdio.h>
int arr[20];
int i;
int j;
int n=5;
int insert()
{
 printf("Enter array elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int insert_first()
{
    int ele;
    printf("Enter element to insert at first:");
    scanf("%d",&ele);
    n++;
    for(i=n;i>=1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[1]=ele;
}
int insert_specified_pos()
{
    int pos,ele;
    printf("Enter position to insert :");
    scanf("%d",&pos);
    printf("Enter ele to insert at specified position:");
    scanf("%d",&ele);
    n++;
    for(i=n;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
}
int insert_last()
{
    int ele;
    printf("Enter element to insert at last:");
    scanf("%d",&ele);
    n++;
    arr[n]=ele;
}
int delete_first()
{
    n--;
    for(i=1;i<=n;i++)
    {
        arr[i]=arr[i+1];
    }
}
int delete_specified_pos()
{
    int pos;
    printf("Enter position to delete :");
    scanf("%d",&pos);
    n--;
    for(i=pos;i<=n;i++)
    {
        arr[i]=arr[i+1];
    }
}
int delete_last()
{
    n--;
}
int display()
{
    printf("array elements are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
int search()
{
    int ele;
    printf("Enter ele to search:");
    scanf("%d",&ele);
    for(i=1;i<=n;i++)
    {
        if(arr[i]==ele)
        {
            break;
        }
    }
    if(arr[i]==ele)
    {
        printf("Element found : %d\n",arr[i]);
    }
    else
    {
        printf("Element not found.\n");
    }
    return 0;
}
int sort()
{
    int temp;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i]<arr[j])
            {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
            }
        }
    }
    return 0;
}
int main()
{
    int m;
    printf("ARRAY OPERATIONS\n");
    printf("=================\n");
    printf("Enter '1' to insert array elements.\n");
    printf("Enter '2' to insert at first position.\n");
    printf("Enter '3' to insert at last position.\n");
    printf("Enter '4' to insert at specified position.\n");
    printf("Enter '5' to delete at first position.\n");
    printf("Enter '6' to delete at last position.\n");
    printf("Enter '7' to delete at specified position.\n");
    printf("Enter '8' to display all elements in the list.\n");
    printf("Enter '9' to sort array elements.\n");
    printf("Enter '10' to search an element.\n");
    printf("Enter '11' to EXIT.\n");
    do{
        printf("Enter your choice:");
        scanf("%d",&m);
        switch(m)
        {
           case 1:
                    insert();
                    break;
            case 2:
                    insert_first();
                    break;
           case 3:
                    insert_last();
                    break;
            case 4:
                    insert_specified_pos();
                    break;
            case 5:
                    delete_first();
                    break;
            case 6:
                    delete_last();
                    break;
            case 7:
                    delete_specified_pos();
                    break;
            case 8:
                    display();
                    break;
           case 9:
                    sort();
                    break;
            case 10:
                    search();
                    break;
            case 11:
                    printf("EXIT\n");
                    break;

        }
    }while(m!=11);
return 0;
}

