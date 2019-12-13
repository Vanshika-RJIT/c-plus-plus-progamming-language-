#include<iostream>
using namespace std;
int main()
{
	int userguess;
	cout<< "Enter the digit between one to nine: "<< endl;
	cin>> userguess;
	int answer=9;
	if(userguess==answer)
	{
		cout<< "Your answer is correct and you have won a lot of gifts"<< endl;
	}
	else
{
	cout<< "Your answer is wrong "<< endl;
} 
return 0;
}
