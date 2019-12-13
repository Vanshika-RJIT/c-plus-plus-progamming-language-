#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[13];
	cin.getline(s1,13);
	strcat(s1," Sir");
	cout<<s1<<endl;
	return 0;
}
