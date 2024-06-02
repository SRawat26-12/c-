#include<iostream>
using namespace std;

int main()
{
	int arr[10],count=0;
	cout<<"enter elements";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
			
		}
	}
	cout<<count;
	return 0;
}
