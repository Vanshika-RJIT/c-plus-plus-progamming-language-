#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,a1,a2,sop=0,pos=1;
cin>>n;
int num;
for(int i=1;i<=n;i++)
{cin>>num;
}
for(int i=1;i<=n;i++)
{
a1=num%10;
while(num!=0)
{
	a2=num%10;
	num=num/10;
}
sop=sop+(a1*a2);
pos=pos*(a1+a2);
}
if(pos>sop)
{
	cout<<pos<<endl;
} 
else
{
	cout<<sop<<endl;
}
}
return 0;
}
