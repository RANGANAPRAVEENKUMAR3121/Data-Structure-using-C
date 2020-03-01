#include<stdio.h>
#include<conio.h>
int main()
{

        int a[10],n,i,beg=0,end=0,mid=0,item=0;
        printf("enter array size:\n");
        scanf("%d",&n);
        printf("enter array elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter element:\n");
        scanf("%d",&item);
        beg=1;
        end=n;
        mid=int((beg+end)/2);
        while(beg<=end && a[mid]!=item)
        {

            if(item>a[mid])
                    beg=mid+1;
            else
                    end=mid-1;
            mid=int((beg+end)/2);
        }
        if(a[mid]==item)
            printf("item found %d",a[mid]);
        else
            printf("item not found");
        return (0);

}
