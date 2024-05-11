#include<iostream>
using namespace std;
int main()
{
int unit;
float bill;
cout<<"enter unit";
cin>>unit;
if(unit==50)
{
	bill=50*0.50f*0.2f;
}
else if(unit==100)
{
	bill=100*0.75f*0.2f;
}
else if(unit>=250)
{
	bill=unit*1.50f*0.2f;
}
cout<<"total bill is:"<<bill;
return 0;
}
