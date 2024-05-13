#include<iostream>
using namespace std;
int main()
{
int a,b,hcf=1;
cout<<"enter first number"<<endl;
cin>>a;
cout<<"enter second number"<<endl;
cin>>b;
for(int i=1;i<=a&&i<=b;i++)
{
	if(a%i==0&&b%i==0)
	{
		hcf=i;
	}
}
int lcm=a*b/hcf;
cout<<lcm;

	return 0;
}
