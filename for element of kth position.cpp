#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
int kthlarg(int a[],int n,int k);
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
		}

        for(int i=0;i<n;i++)
        {
            if(i==k-1)
            {
                cout<<a[i];
                break;
            }
        }
        cout<<kthlarg(a,n,k)<<endl;
	}
        return 0;
	}
        int kthlarg(int a[],int n,int k)
        {
			sort(a,a+n,greater<int>());
			return a[k-1];
		}
