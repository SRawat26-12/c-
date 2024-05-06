#include<iostream>
using namespace std;
int main()
{
	int n,d=0,b=1,rem;
	cout<<"enter number";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		d=d+rem*b;
		n=n/10;
		b=b*2;
		
	}
	cout<<d;
	return 0;
}
