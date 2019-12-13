#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d ;
	    if(a==b&&a!=c&&a!=d&&c==d)
	    cout<<"YES"<<endl;
	    else if(a==c&&a!=b&&a!=d&&b==d)
	    cout<<"YES"<<endl;
	    else if(a==d&&a!=b&&a!=c&&b==c)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

