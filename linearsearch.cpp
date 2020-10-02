#include<iostream>
using namespace std;
int main()
{
  int n,k,found=0,j=0;
  cout<<"Enter the number of elements:-"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements in array-"<<endl;
  for (int i=0;i<n;i++)
  {
     cin>>a[i];
     }
     cout<<"Enter the element for search-"<<endl;
     cin>>k;
     for(int i=0;i<n;i++)
     {
       if(a[i]!=k)
       {
           j++;
           found=1;
          }
        else{
          found=0;
          }
     }
        if(found==0)
      {
      cout<<"Element Found at index"<<j+1<<endl;
      }
      else{
      cout<<"Element not found"<<endl;

      }
}

