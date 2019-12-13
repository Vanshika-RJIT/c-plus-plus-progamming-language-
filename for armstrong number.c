#include<stdio.h>
int main()
{
    int num,temp,sum,r;
    for(num==1;num<=500;num++)
    {
        temp=num;
        sum=0;
        while(temp>0)
        {
            r=temp%10;
            temp=temp/10;
            sum=sum+(r*r*r);
        }
        if(sum==num)
            printf("\nThe armstrong number:%d",num);
    }
    return 0;
}
