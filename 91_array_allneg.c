#include<stdio.h>
int main()
{
    int a[40],i,n;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter the  elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("elements are %d:",a[i]);
        }
        
        else
        {
            printf("no negative ");
        }
    }
}   