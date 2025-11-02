#include<stdio.h>
int main()
{
    float temp,converted;
    int choice;
    printf("1.celsius to fahranheit\n");
    printf("2.fahrenheit to celsius\n");
    printf("enter your choice 1 or 2:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("enter temprature in celsius:");
        scanf("%f",&temp);
        converted=(temp*9/5)+32;
        printf("%.2f",converted);
        break;
        case 2:
        printf("enter temprature in fahrenheit:");
        scanf("%f",&temp);
        converted=(temp-32)*5/9;
        printf("%f",converted);
        break;
        default:
        printf("invalid input");
    }return 0;
}