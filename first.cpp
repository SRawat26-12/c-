#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int bit;
	int ans=0;
	int i=0;
	cout<<"enter number\n";
	cin>>n;
	while(n!=0)
	{
		bit=n&1;
		ans=bit*pow(10,i)+ans;
		n=n>>1;
		i++;
	}
	cout<<ans;
	return 0;
}

