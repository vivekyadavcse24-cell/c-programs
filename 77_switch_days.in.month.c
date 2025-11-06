#include<stdio.h>
int main()
{
    int month;
    printf("enter the month numner (1-12):");
    scanf("%d",&month);
    switch(month)
    {
        case 1:case 3: case 5: case 7: case 8: case 10: case 12:
        printf("total days:31\n");
        break;
        case 4: case 6: case 9: case 11:
        printf("total days :30\n");
        break;
        case 2:
        printf("total days :28\n");
        break;
        default:
        printf("somthing went wrong");
        break;
    }return 0;
}