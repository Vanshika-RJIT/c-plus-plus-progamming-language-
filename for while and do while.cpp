#include<iostream>
using namespace std;
int main()
{
	int i=1,f=1;
	do
	{
		f=f*i;
		i++;
		//i=i+1;
	}
	while(i<6);
	cout<< "The required factorial:"<< f<< endl;
	return 0;
}
