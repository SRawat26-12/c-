#include<iostream>
using namespace std;
int main()
{
int a1,a2,a3;
cout<<"enter angles";
cin>>a1>>a2>>a3;
int sum=a1+a2+a3;
if(sum==180&&a1>0&&a2>0&&a3>0)
{
	cout<<"triangle is valid";
	
}
else
{
	cout<<"triangle is not valid";
}
return 0;
}

