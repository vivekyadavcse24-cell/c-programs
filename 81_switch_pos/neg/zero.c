#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    switch(n>0){
        case 1:
        printf("%d is positive.\n",n);
        break;
        case 0:
        switch(n<0){
            case 1:
            printf("%d is negative.\n",n);
            break;
            case 0:
            printf("the number is zero.\n");
            break;
        }break;
    }return 0;
}