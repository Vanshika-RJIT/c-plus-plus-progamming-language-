#include<iostream>
using namespace std;
int addition(int a, int b);
void printout();
int main()
{
	int x,y,z;
	cout<<"Enter the first number:";
	cin>> x;
	cout<<"Enter the second number:";
	cin>> y;
	z=addition(x,y);
	cout<<z<<endl;
	printout();
	return 0;
}
	int addition(int a, int b)
	{
		int c;
		c=a+b;
		return c;
}
void printout()
{
	cout<< "my name is vanshika sikarwar"<< endl;
	cout<< "I am  very happy to see you here"<< endl;
}	
	
