#include<iostream>
using namespace std;
int main()
{
int n,rm,s=0;
cout<<"enter number";
cin>>n;
int o=n;
while(n!=0)
{
	rm=n%10;
	s=s*10+rm;
	n=n/10;
	
}
if(s==o)
{
	cout<<"palindrom";
}
else
{
	cout<<"not palindrom";
}
return 0;
}

