#include<iostream>
using namespace std;
int main()
{
int power,base,r=1;
cout<<"enter base"<<endl;
cin>>base;
cout<<"enter power";
cin>>power;
for(int i=1;i<=power;i++)
{
	r=r*base;
}
cout<<r;

	return 0;
}
