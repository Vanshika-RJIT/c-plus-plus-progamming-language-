#include<iostream> 
using namespace std;
int main()
{
int n,c=1;
cin>>n;
if(n==1)
{
cout<<n;
}
if(n!=1)
{
	for(int i=1;i<=n-1;i++)
	{
		c=c*2+2;
	}
	cout<<c;
}
return 0;
}
