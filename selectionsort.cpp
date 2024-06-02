#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter elements";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int temp,small;
	for(int i=0;i<size;i++)
	{
		small=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[small]>arr[j])
			{
				small=j;
			}
		}
		if(arr[small]!=arr[i])
		{
			temp=arr[i];
			arr[i]=arr[small];
			arr[small]=temp;
		}
	}
	cout<<"after sorting\n";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
