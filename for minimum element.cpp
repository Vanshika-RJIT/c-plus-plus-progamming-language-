#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,a1,a2;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=1;i<n;i++)
{
if(a[0]>a[i])
{
a[0]=a[i];
}
}
a1=a[0];
int sum=0;
for(int i=1;i<n;i++)
{
	sum+=a[i];
}
a2=sum;
cout<<abs(a1-a2)<<endl;
}
	
return 0;
}
