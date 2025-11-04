#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("enter the marks:");
    scanf("%d",&marks);
    switch(marks/10)
    {
    case 10:
    case 9:
    grade='A';
    break;
    case 8:
    grade='B';
    break;
    case 7:
    grade ='c';
    break;
    case 6:
    grade='D';
    case 5:
    grade='E';
    break;
    default:
    grade='f';
    break;
}printf("grade is=%c",grade);
}