#include<iostream>
using namespace std;
int main()
{
	 unsigned int n=12;
	unsigned long long int f=1;
    for( unsigned int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<< "Factorial :  " << f << endl;
	return 0;
}
