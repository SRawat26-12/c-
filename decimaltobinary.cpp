#include<iostream>
using namespace std;
int main()
{
int decimal,binary,i=1;
int rm[100];
cout<<"enter decimal";
cin>>decimal;
while(decimal!=0)
{
	rm[i]=decimal%2;
	decimal=decimal/2;
	i++;
}
cout<<"binary number is:";
for( i=i-1;i>0;i--)
{
	cout<<rm[i];
}
return 0;
}

