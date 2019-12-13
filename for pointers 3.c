#include<stdio.h>
int main()
{
int x[10]={1,2,3,4,5,6,7,8,9,10};
int *px,i;
px=x;
for(i=0;i<10;i++)
{
printf("\n\nAddress:%u Value:%d",(px+i),*(px+i));

}

return  0;

}





























