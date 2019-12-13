#include<stdio.h>
int main()
{
char str1[50],str2[50];
int i=0,j=0;
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
while(str1[i]!='\0'&&str2[j]!='\0')
{ i++;
j++;
}
  if(str1[i]==str2[j])
  printf("The strings are equal");
  else
  printf("The strings are not equal");


return 0;

}
