#include<iostream>
using namespace std;
int main()
{
int i,j,n=3,a=1;
for(i=1;i<=3;i++)
{
	for(j=1;j<=i;j++)
	{
		cout<<a<<" ";
		a++;
	}
	cout<<endl;
}
return 0;
}

