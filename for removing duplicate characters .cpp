#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin>>t;
    while(t--)
    { string s;
     cin>>s;
     n=s.size();
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
              if(s[i]==s[j])
              {
                  for(int k=j;k<n;k++)
                  {
                      s[k]=s[k+1];
                  }
                  n--;
                  j--;
              }
         }

    }
     cout<<s<<endl;
    }
    
    return 0;
}

