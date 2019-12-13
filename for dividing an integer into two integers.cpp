#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int t;
 cin>>t;
 int c=0;
 while(t--)
 { c++;
	 string n,m;
	 cin>>n;
	 m=n;
	 for(int i=0;n[i]!='\0';i++)
	 {
		 if(n[i]=='4')
		 {
			 n[i]='3';
		 }
	 }
	 int a=stoi(m);
	 int b=stoi(n);
	  
	 
	 cout<<"Case #"<<c<<": "<<n<<" "<<a-b<<endl;
	 
 }
	 return 0;
 }
		 
	 

