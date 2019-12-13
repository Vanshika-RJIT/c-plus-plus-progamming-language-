#include<iostream>
using namespace std;
int main()
{
int t; 
cin>>t;
while(t--)
{
int n,rv=0,a,rv1=0,a1,n1;
cin>>n;
while(n>0)
{
a=n%10;
rv=rv*10+(a+1);
n=n/10;
if(a==9)
{
	a=0;
}
}
cout<<rv<<endl;
n1=rv;
while(n1!=0)
{
	a1=n1%10;
	rv1=rv1*10+a1;	
	n1=n1/10;	
}
cout<<rv1<<endl;
}
return 0;
}
