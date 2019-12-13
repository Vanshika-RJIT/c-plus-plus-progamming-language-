#include<stdio.h>
#include<string.h>
int main()
{

char string[100];
puts("Enter the string to be converted into uppercase letters: ");
gets(string);
printf("UpperCase Letters:%s",strupr(string));
return 0;


}
