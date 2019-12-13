##include<stdio.h>
int main()
{
    int bas_salary,da,hra,gro_salary;
    printf("\nEnter your basic salary:");
    scanf("%d",&bas_salary);
    da=(bas_salary*40)/100;
    hra=(bas_salary*20)/100;
    gro_salary=(bas_salary+da+hra);
    printf("Your Gross Salary:%d",gro_salary);
    return 0;
}
