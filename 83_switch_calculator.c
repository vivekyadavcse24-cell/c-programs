#include<stdio.h>
int main()
{
    char op;
    int a,b,ans;
    printf("enter the arthimatic operator:");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
{
    case '+':
    ans=a+b;
    break;
     case '-':
    ans=a-b;
    break;
     case '*':
    ans=a*b;
    break;
     case '/':
    ans=a/b;
    break;
     case '%':
    ans=a%b;
    break;
    default:
    printf("invaled input\a");
    break;

}
printf("%d",ans);
}