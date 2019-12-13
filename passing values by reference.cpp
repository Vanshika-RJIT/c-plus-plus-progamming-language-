#include<iostream>
using namespace std;
int print(int& num);

int main()
{
	int number=20;
	cout<<number<<endl;
	print(number);
	cout<<number<<endl;
	return 0;
}
int print(int& num)
{
	num=10;
	cout<<num<<endl;
	return num;
}

