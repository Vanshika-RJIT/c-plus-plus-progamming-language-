#include<iostream>
using namespace std;
int main()
{
	char s1[20],s2[70];
	int f=0;
	cin.getline(s1,20);
	cin.getline(s2,70);
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==s2[i])
		{
			f=1;
		}
		else 
		{
			f=0;
		}
		}
		if(f==1)
		{
			cout<<"Strings are equal";
		}
		else 
		{
			cout<<"Strings are not equal";
		}
		return 0;
	}
