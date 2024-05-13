#include<iostream>
using namespace std;
int main()
{
int unit;
float bill,total,charge;
cout<<"enter unit";
cin>>unit;
if(unit<=50)
{
	bill=unit*0.50;
}
else if(unit<=150)
{
bill=25+((unit-50)*0.75);	
	
}
else if(unit<=250){
	bill=100+((unit-150)*1.20);

}
else
{
	bill = 220 + ((unit-250) * 1.50);
	
}
charge=bill*0.20;
	total=bill+charge;
	cout<<total;

return 0;
}
