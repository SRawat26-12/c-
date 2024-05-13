#include<iostream>
using namespace std;
int main()
{
int n,rm,arm=0;
cout<<"enter number";
cin>>n;
int o=n;
while(n!=0)
{
rm=n%10;
arm=arm+rm*rm*rm;
n=n/10;
	
}
if(arm==o)
{
	cout<<"armstrong number";
}
else{
	cout<<"not armstrong";
}
return 0;
}
