#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    while(t--)
    {
    int n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2!=0)
        {
            for(int i=0;i<n-1;i+=2)
            {
                swap(s[i],s[i+1]);

            }
        }
        else{
            for(int i=0;i<n;i+=2)
            {
                swap(s[i],s[i+1]);
            }
            }
        for(int i=0;i<n;i++)
        {
            s[i]=c[122-s[i]];
        }
        cout<<s<<endl;
        
     }
    return 0;
}
