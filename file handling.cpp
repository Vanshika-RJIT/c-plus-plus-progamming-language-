#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
int main()
{
	ifstream f;
	ofstream of;
	of.open("output.txt");
	int a[5];
	f.open("input.txt");
	int n=0;
	while(!f.eof())
	{
		f>>a[n];
		n++;
	}
	int no=n-1;
	sort(a,a+no);
	int i=0;
	while(no!=0)
	{
		of<<a[i]<<endl;
		i++;
		no--;
	}
	f.close();
	of.close();
	return 0;
}

	
	
