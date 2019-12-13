#include<iostream>
using namespace std;
void print1(int& a,int& b);
void print2(int& a,int& b,int& c);
void print3(int& c);


int main()
{
	int x=0,y=0,tot=0;
	print1(x,y);
	print2(x,y,tot);
	print3(tot);
	cout<<"x="<<x<<"y="<<y<<"tot="<<tot<<endl;
	return 0;
}
void print1(int& a,int& b)
{
	cout<<"Enter the value of x:";
	cin>>a;
	cout<<"Enter the value of y:";
	cin>>b;
}
void print2(int& a,int& b,int& c)
{
	c=a+b;
}
void print3(int& c)
{
	cout<<c<<endl<<endl;
}

