#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s="RJITGEEKS";
	int i=0;
	int a[26]={0};
	for(int i=0;s[i]!='\0';i++)
	{
		a[s[i]-'A']++;
	}
	for(int i=0;s[i]!='\0';i++)
	{
		cout<<s[i]<<a[s[i]-'A']<<endl;
	}
	a[s[i]-'A']=0;
	return 0;
}
	
