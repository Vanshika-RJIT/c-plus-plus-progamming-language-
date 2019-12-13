#include<stdio.h>
#include<conio.h>
int main()
{
int p,t;
float r,si;
printf("Principal Amount?");
scanf("%d",p);
printf("Rate of Interest?");
scanf("%f",r);
printf("No.of year?");
scanf("%d",t);
si=p*r*t/100;
printf("SIMPLE INTEREST=%7.2f",si);
return 0;
}
