#include<stdio.h>
int main()
{
    int i,overtime,overtimepay=0,time_employee;
    for(i==1;i<=10;i++)
    {
        printf("Enter the time employee worked in hrs:");
        scanf("%d",&time_employee);

    if(time_employee>40)
    {
        overtime=time_employee-40;
        overtimepay=overtimepay+(12*overtime);
    }
    }
    printf("The overtime pay of ten employees:%d",overtimepay);

    return 0;
}
