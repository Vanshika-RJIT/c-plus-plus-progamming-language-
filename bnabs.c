#include<stdio.h>
int main()
{
    float l,b,area_r,peri,r,area_c,circum;
    printf("Enter length and breadth of rectangle:");
    scanf("%f%f",&l,&b);
    printf("Enter radius of circle:");
    scanf("%f",&r);
    area_r=l*b;
    peri=2*(l+b);
    area_c=3.14*r*r;
    circum=2*3.14*r;
    printf("\nThe area of rectangle      :%5.2fsq. unit",area_r);
    printf("\nThe perimeter of rectangle :%5.2funit",peri);
    printf("\nThe area of circle         :%5.2fsq. unit",area_c);
    printf("\nThe circumference of circle:%5.2funit",circum);
    return 0;
}


