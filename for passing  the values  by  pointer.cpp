#include<iostream>
using namespace std;
int print(int* x,int* y);
int main()
{
	int a=10,b=13;
	cout<<"Before Swapping"<<endl;
	cout<<"a ="<<a<<"b ="<<b<<endl;
	print(&a,&b);
	cout<<"After swapping"<<endl;
	cout<<"a ="<<a<<"b ="<<b<<endl;
	return 0;
}
int print(int* x,int* y)
{
	int z=*x;
	*x=*y;
	*y=z;
	return z;
}

