#include<iostream>
using namespace std;
int main()
{
int binary,deci,base=1,rm;
cout<<"enter binary number";
cin>>binary;
while(binary!=0)
{
	rm=binary%10;
	deci=deci+rm*base;
	base=base*2;
	binary=binary/10;
}
cout<<deci;
return 0;
}

