#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int bas_sal;
	    double gros_sal,hra,da;
	    cin>>bas_sal;
	    if(bas_sal<1500)
	    {
	        hra=bas_sal*0.1;	       
	        da=bas_sal*0.9;
	        gros_sal=hra+da+bas_sal;
	        cout<<fixed<<setprecision(2);
	        cout<<gros_sal<<endl;
	    }
	    else
	    {
	        hra=500;
	        da=bas_sal*0.98;
	        gros_sal=hra+da+bas_sal;
	         cout<<fixed<<setprecision(2);
	        cout<<gros_sal<<endl;
	    }
	}
	return 0;
}
