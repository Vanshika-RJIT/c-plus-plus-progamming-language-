#include"stdio.h"
#include<stdlib.h>
int main()
{
    FILE *fp;
    char another='y';
    struct emp
    {
        char name[12];
        int age;
        float bas_sal;
    };
    struct emp e;
    fp=fopen("vanshika.txt","w");
    if(fp=NULL)
    {
        puts("This file can not open");
        exit(1);
    }
    while(another=='y')
    {
        printf("Enter the name,age and basic salary:");
        scanf("%s%d%f",e.name,&e.age,&e.bas_sal);
        fprintf(fp,"%s%d%f",e.name,e.age,e.bas_sal);
        printf("Enter the additional things:(y/n)");
        fflush(stdin);
        another=getche();
    }
    fclose(fp);
    return 0;
}
