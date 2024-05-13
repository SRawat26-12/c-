#include<iostream>
using namespace std;
int main()
{
int n,sum=0,rm;
cout<<"enter number";
cin>>n;
while(n!=0)
{
	rm=n%10;
	sum=sum+rm;
	n=n/10;
}
cout<<sum;
return 0;
}

