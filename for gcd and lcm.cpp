#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n1,n2;
        int hcf,lcm,temp;
        cin>>n1>>n2;
        hcf=n1;
        temp=n2;
        while(hcf!=temp)
        {
            if(hcf>temp)
            {
                hcf-=temp;
            }
            else
            {
                temp-=hcf;
            }
        }
            lcm=n1*n2/hcf;
            cout<<hcf<<" "<<lcm<<endl;
        }
        return 0;
    }
