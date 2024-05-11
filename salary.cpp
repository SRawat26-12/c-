#include<iostream>
using namespace std;
int main()
{
int salary;
float hra,da;
cout<<"enter salary";
cin>>salary;
if(salary<=10000)
{
	hra=salary*0.8f;
	da=salary*0.2f;
}
else if(salary<=25000)
{
	hra=salary*0.25f;
	da=salary*0.9f;
}
else if(salary<=20000) 
{
	hra=salary*0.3f;
	da=salary*0.95f;
}
cout<<"gross salary is:"<<salary+hra+da;
return 0;
}
