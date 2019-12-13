#include<stdio.h>
int main()
{
    int i,num,n,po,ne,ze;
    po=ne=ze=0;
    printf("Enter the total number:");
    scanf("%d",&num);
    for(i==0;i<num;i++)
    {
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
        po=po+1;
    else if(n<0)
        ne=ne+1;
    else
        ze=ze+1;
            }
            printf("\nThe total positive :%d",po);
            printf("\nThe total negative :%d",ne);
            printf("\nThe total zero     :%d",ze);
            return 0;
}
