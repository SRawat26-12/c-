#include<iostream>
using namespace std;
int main()
{
int n,first,last;
cout<<"enter number";
cin>>n;
first=n%10;
while(n!=0)
{
	last=n%10;
	n=n/10;
}
cout<<first+last;
return 0;
}
