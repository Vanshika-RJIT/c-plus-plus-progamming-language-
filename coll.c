#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,x3,y1,y2,y3,x,y;
    printf("\nEnter the value of A:");
    scanf("%f",&a);
    printf("\nEnter the value of  B:");
    scanf("%f",&b);
    printf("\nEnter the value of C:");
    scanf("%f",&c);
    printf("\nEnter the value of x1:");
    scanf("%f",&x1);
    printf("\nEnter the value of x2:");
    scanf("%f",&x2);
    printf("\nEnter the value of x3:");
    scanf("%f",&x3);
    printf("\nEnter the values of y1,y2,y3:");
    scanf("%f%f%f",&y1,&y2,&y3);
    x=(a*x1+b*x2+c*x3)/(a+b+c);
    printf("\nThe x coordinate of incentre:%7.2f",x);
    y=(a*y1+b*y2+c*y3)/(a+b+c);
    printf("\nThe y coordinate of incentre:%7.2f",y);
    return 0;



}
