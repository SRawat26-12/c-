#include<iostream>
using namespace std;
int main()
{
int i,j,z=1,n,k;
cout<<"enter number of rows";
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=n-1;j>=i;j--)
	{
		cout<<" ";
	}
	for(k=1;k<=z;k++)
	{
		cout<<"*";
	}
	z=z+2;
	cout<<endl;
}
return 0;
}

