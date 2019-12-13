#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int a,b,c,d,e,f,sum=0;
		cin>>n;
		a=n/100;
		n=n%100;
		b=n/50;
		n=n%50;
		c=n/10;
		n=n%10;
		d=n/5;
		n=n%5;
		e=n/2;
		n=n%2;
		f=n/1;
		sum=a+b+c+d+e+f;
		cout<<sum<<endl;
	}
	return 0;
}
