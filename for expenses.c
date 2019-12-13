#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float price,quantity;
	    float discount,expense,totalexpense;
	    cin>>price>>quantity;
	    expense=price*quantity;
	    if(expense<=1000)
	    {
	    cout<<expense<<endl;}
	    else
	    {
	        discount=(expense*10)/1000;
	        totalexpense=expense-discount;
	        cout<<totalexpense<<endl;
	    }



	}
	return 0;
}
