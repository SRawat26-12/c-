#include<iostream>
using namespace std;
int main()
{
int n;
int a=1,r;
int sum=0;
cout<<"enter number";
cin>>n;
int s=n;
while(s!=0)
{
	
	r=s%10;
	for(int i=2;i<=r;i++)
	{
		a=a*i;
	
	
	}
		sum=sum+a;
		s=s/10;

}
if(n==sum)
cout<<"strong number";
else
cout<<"not strong";
return 0;

}
