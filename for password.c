#include<stdio.h>
int main()
{
char user[20],paswrd[20];
int i=1;
printf("Enter the user name:");
scanf("%s",&user);
printf("Enter the password:");
while(i<=10)
{
paswrd[i++]=getch();
printf("*");
}
paswrd[i]='\0';
printf("password  is %s",paswrd);
return 0;
}
