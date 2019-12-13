#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a;
	long int n;
	cin>>t;
	while(t--)
	{
	    while(n>0)
	    {
			cin>>n;
	        a=n%10;
	        n=n/10;
	        cout<<a+n<<endl;
	    }
	}
	return 0;
}
