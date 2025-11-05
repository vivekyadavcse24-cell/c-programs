#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    int ch;
    double h,v,r;
    printf("enter height and volume:");
    scanf("%lf%lf",&h,&v);
    r=sqrt(v/(PI*h));
    printf("1.radius 2.circumference 3.volume\nchoice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("radius =%.2lf\n",r);break;
        case 2: printf("circumference=%.2lf\n",2*PI*r);break;
        case 3: printf("invalid choice\n");
    }
    return 0;

    
    
}