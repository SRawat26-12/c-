#include<iostream>
using namespace std;
int main()
{
int b,count=0;
cout<<"enter number";
cin>>b;
while(b!=0)
{
	if(b&1)
	{
		count++;
		
	}
	b=b>>1;
}
cout<<count;
return 0;
}

