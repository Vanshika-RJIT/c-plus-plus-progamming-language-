#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("Enter selling price:");
    scanf("%d",&sp);
    if(sp>cp)
   {profit=sp-cp;
   printf("THE PROFIT:%d",profit);}
   else
    {loss=cp-sp;
printf("THE LOSS:%d",loss);}
return 0;
}
