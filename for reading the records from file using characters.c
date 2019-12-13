
#include"stdio.h"
#include<stdlib.h>
int main()
{
    FILE *fp;
    struct emp
    {
        char name[12];
        int age;
        float bas_sal;
    };
    struct emp e;
    fp=fopen("vanshika.txt","r");
    if(fp=NULL)
    {
        printf("This file can not open");
        exit(1);

    }
    while(fscanf(fp,"%s%d%f",e.name,e.age,e.bas_sal)!=EOF)
        printf("%s%d%f",e.name,e.age,e.bas_sal);




    fclose(fp);
    return 0;
}
