#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	int i;
	getline(cin,s);
	int count[26]={0};
	for(i=0;s[i]!='0';i++)
	{
		count[s[i]-'a']++;
}
for(int i=0;i<26;i++)
{
	for(int j=0;j<count[i];j++)
	{
		cout<<char(i+'a')<<endl;
	}
}
return 0;
}
		
