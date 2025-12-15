#include <stdio.h>
#include<stdlib.h>

int main() {
    int a[50],i,n,pos,val;
    printf("enter the no of element:");
    scanf("%d",&n);
   
   for(i=0;i<n;i++)
   {
    printf("entr the val tobe inserted:");
    scanf("%d",&val);
    printf("enter the position:");
    scanf("%d",&pos);
    if(0<=pos<n)
        {
            a[pos]=val;
            
        }
    }

      for(i=0;i<n;i++)
      {
          printf("%d ",a[i]);
      }
   
}
