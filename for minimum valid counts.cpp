#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int t;
	cin>>t;
	while(t--)
	{
	int n,m;
	cin>>n;
	int a[n][n];
    m=n*n;
    int x[m+1],y[m+1];
    for(int i=0;i<n;i++)
    {
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			x[a[i][j]]=i;
			y[a[i][j]]=j;
		}
	}
	int c=0;
	for(int i=2;i<=m;i++)
	{
		c+=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);//manhattan distance formula when the counts have to be found in same cell//
	}
		cout<<c<<endl;
	}
    return 0;
}
