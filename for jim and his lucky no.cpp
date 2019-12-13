#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int n,k;
int a,c=0;
cin>>n>>k;
while(n>0)
{
a=n%10;
n=n/10;
if(a==7)
	{c++;}
}
if(c==0)
cout<<"NO"<<endl;
else
{if(c%k==0)
cout<<"YES"<<endl;
else 
cout<<"NO"<<endl;}
}
return 0;
}
