#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter number";
	cin>>a;
	switch(a)
	{
		case 0:
		cout<<"Sunday";
			break;	
		case 1:
			cout<<"monday";
			break;
		case 2:
		cout<<"tuesday";
			break;
		case 3:
		cout<<"wednesday";
			break;
		case 4:
		cout<<"thursday";
			break;
		case 5:
		cout<<"friday";
			break;
		case 6:
		cout<<"saturday";
			break;
		default:
			cout<<"enter valid number";
			
	}
return 0;
}
