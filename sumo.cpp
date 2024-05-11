#include<iostream>
using namespace std;
int main()
{
int i=1,n,esum=0;
cout<<"enter number";
cin>>n;
while(i<=n)
{
	if(i%2!=0)
	{
		esum=esum+i;
	}
	i++;
}
cout<<esum;

return 0;
}

