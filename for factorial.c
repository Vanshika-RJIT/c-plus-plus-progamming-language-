#include<stdio.h>
#include<conio.h>
int main()
{
 int n,n1,nr1,r,r1,i,j,k,f=1;
 int ncr;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the value of r:");
scanf("%d",&r);
for(i=0;i<=n;i++)
{
f=f*i;
}
n1=f;
f=1;
for(j=0;j<=r;j++)
{f=f*i;
}
r1=f;
f=1;
for(k=0;k<=n-r;k++)
{ f=f*i;
}
nr1=f;
ncr=n1/(r1*nr1);
printf("NCR=%f",ncr);
return 0;}




