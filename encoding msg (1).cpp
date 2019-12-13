#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int t;
cin>>t;
char B[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
while(t--){
  int n,i;
  cin>>n;
  string s;
  cin>>s;

    for(i=0;i<n;i++)
    {
        s[i]=B[s[i]%97];
    }

   

if(n%2!=0)
   { for(i=0;i<n-1;i+=2)
    {
        swap(s[i],s[i+1]);
    }
}
else
{
	for(i=0;i<n;i+=2)
	{
		swap(s[i],s[i+1]);}
	}
		
	    cout<<s<<endl;
}
    return 0;
}
