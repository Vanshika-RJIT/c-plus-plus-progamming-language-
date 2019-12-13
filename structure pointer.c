#include<stdio.h>
struct Point 
{
int x,y,z;
};
int main()
{
struct Point p1={1,2,3};
struct Point *p2;
p2=&p1;
printf("The value of x,y and z:%d,%d and %d",p2->x,p2->y,p2->z); 
return 0;
}
