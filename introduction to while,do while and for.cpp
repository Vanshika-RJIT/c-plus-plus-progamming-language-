#include<iostream>
using namespace std;
int main()
{
	int n,f=1;
	cout<< "Enter the number for which you have to find factorial: ";
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
		if(i==5)
		{
			break;
		}
	}
	cout<< "The required factorial for a given number :"<< endl;
	cout<< f << endl;
	return 0;
}
	
	
