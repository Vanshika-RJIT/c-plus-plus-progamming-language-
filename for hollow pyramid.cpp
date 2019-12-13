
#include<iostream>
using namespace std;
int main()
{
	int row;
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int space=i;space<row;space++)
		{
			cout<<" ";}
		for(int j=1;j<=(2*i-1);j++)
		{
			if(i==row||j==1||j==2*i-1)
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
	}
		}
		cout<<endl;
	}
	return 0;
}

