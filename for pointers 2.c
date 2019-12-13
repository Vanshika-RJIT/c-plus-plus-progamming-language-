#include<stdio.h>
int main()
{
int x,y,s;
int *px,*py,*ps;
px=&x;
py=&y;
ps=&s;
printf("Enter the value of x:");
scanf("%d",px);
printf("Enter the value of y:");
scanf("%d",py);
*ps=*px+*py;
printf("%d",*ps);
return 0;

}
