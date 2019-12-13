#include<iostream>
using namespace std;
int main()
{
	char name[20];
	char myname[20];
	int i=0;
	cin.get(name,20);
	while(name[i]!='\0')
	{
		myname[i]=name[i];
		i++;
	}
	myname[i]='\0';
	cout<<"My Name Is :"<<myname;
	return 0;
}
	
