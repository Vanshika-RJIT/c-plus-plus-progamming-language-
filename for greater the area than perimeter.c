#include<stdio.h>
int main()
{
    int l,b,area,peri;
    printf("Enter the length,breadth:");
    scanf("%d%d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    printf("THE AREA OF RECTANGLE IS GREATER THAN THE PERIMETER");
    else
        printf("THE AREA OF RECTANGLE IS NOT GREATER THAN THE PERIMETER");
    return 0;
}
