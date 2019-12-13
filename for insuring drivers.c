#include<stdio.h>
int main()
{
    char ms,g,M,U,F;
    int age;
    printf("Enter the marital status,gender,age:");
    scanf("%s%s%d",&ms,&g,&age);
    if(ms==M)
        printf("THE DRIVERS ARE INSURED");
        else if(ms==M&&g==M&&age>30)
        printf("THE DRIVERS ARE INSURED");
        else if(ms==U&&g==F&&age>25)
        printf("THE DRIVERS ARE INSURED");
        else
        printf("THE DRIVERS ARE NOT INSURED");
        return 0;
}
