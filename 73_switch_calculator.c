#include<stdio.h>
int main()
{
   char op;
    int i,j,ans;
    printf("enter arthimatic expresion:");
    scanf("%d%c%d",&i,&op,&j);
   
    switch(op)
    {
        case '+':
        ans=i+j;
        break;
         case '-':
    ans=i-j;
        break;
         case '*':
        ans=i*j;
        break;
         case '/':
        ans=i/j;
        break;
         case '%':
        ans=i%j;
        break;
    }printf("ans is %d",ans);


}