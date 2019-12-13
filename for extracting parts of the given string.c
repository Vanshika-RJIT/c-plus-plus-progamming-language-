#include<stdio.h>
#include<string.h>
int main()
{
    char string1[50],string2[50];
    int i,j,n,m,l;
    printf("Enter the string:");
    gets(string1);
    printf("Enter the position of the required character from which characters have to extract:");
    scanf("%d",&n);
    printf("Enter the no. of characters to be extracted:");
    scanf("%d",&m);
    l=strlen(string1);
    if(m+n-1<l)
    {
        for(i=n-1;i<n+m-1;i++)
        {
            for(j=0;j<i;j++)
            {
            string2[j]=string1[i];
            string2[j]='\0';
            }
        }
        printf("The extracted string:%s",string2);
    }
    else
     printf("extraction of characters are not possible");
    return 0;}




