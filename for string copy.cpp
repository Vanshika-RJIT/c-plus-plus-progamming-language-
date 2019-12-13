#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char name[20];
char myname[20];
cin.get(name,20);
strcpy(myname,name);
cout<<"My Name is :"<<myname<<endl;
return 0;
}
