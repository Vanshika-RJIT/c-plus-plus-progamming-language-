#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int flag=1,c;
	if(n1>n2)
	{
		while(flag)
		{
			if(n2==0)
			{
				flag=0;}
				else
				{
			c=n2;
			n2=n1%n2;
			n1=c;
		}
	}
		cout<<n1<<endl;
	}
	else
		{
			int temp;
			temp=n1;
			n1=n2;
			n2=temp;
			while(flag)
		{
			if(n2==0)
			{
				flag=0;}
				else
				{
			c=n2;
			n2=n1%n2;
			n1=c;
		}
		}
		cout<<n1<<endl;
	}
			
		return 0;
	}
	
