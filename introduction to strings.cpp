#include<iostream>
using namespace std;
int main()
{
	char str[40];
	cout<<"Enter your string:";
	cin.get(str,40);
	for(int i=0;str[i]!='\0';i++)
	{
		cout<<str[i];
		
	}

	return 0;
}
