#include<stdio.h>
int main()
{

    char str1[45],str2[45];
    int i=0,j=0;
    printf("Enter the first string");
    gets(str1);
    printf("Enter the second string");
    gets(str2);
    while(str1[i]!='\0')
        i++;
    str1[i++]='  ';
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;

    }
        str1[i]='\0';
        printf("The new string:%s",str1);
        return 0;



}
