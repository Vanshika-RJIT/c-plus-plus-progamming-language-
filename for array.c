#include<stdio.h>
int main()
{
    int x[25];
    int i,j,sum=0;
    printf("The number to be searched:");
    scanf("%d",&j);
    for(i==0;i<25;i++)
    {printf("x[%d]",i);
    scanf("%d",&x[i]);
    }
    for(i==0;i<25;i++)
       {printf("x[%d]=%d",i,x[i]);
       if(x[i]==j)
        sum=sum+1;
}
printf("The number which is present in array:%d",sum);
return 0;
}

