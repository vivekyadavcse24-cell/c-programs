#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two no:");
    scanf("%d %d",&a,&b);
    switch(a>b){
        case 1:
        printf("%d is greater than %d\n",a,b);
        break;
        case 0:
        switch(a<b){
            case 1:
            printf("%d is greater than %d\n",b,a);
            break;
            case 0:
            printf("both are equal\n");
            break;
        }break;
    }return 0;
}