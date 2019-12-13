#include"stdio.h"
#include"stdlib.h"
int main()
{
FILE *fp,*ft;
char ch;
fp=fopen("my friend1.txt","r");
if(fp==NULL)
{
printf("The file can not open");
exit(1);
}
ft=fopen("my friend2.txt","r");
if(fp==NULL)
{
printf("This file can not open");
exit(1);
}
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
  break;
fputc(ch,ft);
} printf("The files are copied");
fclose(fp);
fclose(ft);
return 0;}

