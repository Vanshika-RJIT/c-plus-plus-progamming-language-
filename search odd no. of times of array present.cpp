#include<iostream>
int findodd(int array[],int n);
using namespace std;
int main()
{
	int array[]={1,1,2,2,3};
	int n=sizeof(array)/sizeof(array[0]);
	findodd(array,n);
	cout<<findodd(array,n)<<endl;
	return 0;
}
int findodd(int array[],int n)
{
	int num=0;
	for(int i=0;i<n;i++)
	{
		num=num^array[i];
	}
	return num;
}
