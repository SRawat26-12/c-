#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"enter number";
cin>>n;
int r=n;
for(int i=1;i<n;i++)
{
	if(n%i==0)
	{
		sum=sum+i;
	}
}
if(r==sum)
{
	cout<<"perfact number";
}
else{
	cout<<"not perfact number";
}
return 0;
}

