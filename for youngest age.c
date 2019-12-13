#include<stdio.h>
int main()
{
    int age_ram,age_shyam,age_ajay,young;
    printf("Enter the ages:");
    scanf("%d%d%d",&age_ram,&age_shyam,&age_ajay);
    if(age_ram<age_shyam)
    if(age_ram<age_ajay)
    young=age_ram;
    else
        young=age_ajay;
    else
        if(age_shyam<age_ajay)
         young=age_shyam;
    else
            young=age_ajay;
            printf("THE YOUNGEST AGE:%d",young);

         return 0;

}
