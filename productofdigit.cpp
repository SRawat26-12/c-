#include<iostream>
using namespace std;
int main()
{
int n,p=1,rm;
cout<<"enter number";
cin>>n;
while(n!=0)
{
	rm=n%10;
	p=p*rm;
	n=n/10;
}
cout<<p;
return 0;
}

