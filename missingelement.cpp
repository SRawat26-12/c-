#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,5>a={2,5,3,1,0};
	int n=a.size();
	int sum=n*(n+1)/2;
	int s=0;
	for(int i=0;i<a.size();i++)
	{
		s=s+a[i];
	}
	cout<<sum-s;
	return 0;
}
