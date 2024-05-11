#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter angles";
cin>>a>>b>>c;

if(a+b>c&&a+c>b&&b+c>a)
{
	cout<<"triangle is valid";
	
}
else
{
	cout<<"triangle is not valid";
}
return 0;
}

