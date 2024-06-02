#include<iostream>
using namespace std;

int main()
{
	int arr[5],n,count=0,i;
	cout<<"enter array elements";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element that you want to search\n";
	cin>>n;
	for( i=0;i<5;i++)
	{
		if(arr[i]==n)
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		cout<<"element found postion"<<i+1;

	}
	else
	{
		cout<<"element not found";
	}
	return 0;
}
