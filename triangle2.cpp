#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter sides";
cin>>a>>b>>c;

if(a==b&&b==c)
{
	cout<<"triangle is equilateral";
	
}
else if(a==b||b==c||c==a)
{
	cout<<"triangle is isosceles";
}
else{
	cout<<"scalene triangle";
}
return 0;
}

