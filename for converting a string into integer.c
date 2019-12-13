#include<stdio.h>
#include<stdlib.h>
int main()
{
    char string[100];
    puts("Enter the string:");
    gets(string);
    printf("Integer:%d",atoi(string));
    return 0;
}
