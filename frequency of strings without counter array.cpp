#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c=0;
	int n=0;
	n=s.size();
	for(int i=1;i<27;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j]==char(96+i))
			{
			  c++;
		  }
	  }
	  cout<<char(96+i)<<c;
	  c=0;
	  cout<<"\n";
  }
		
		return 0;
	}
			
			
