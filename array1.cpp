#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,1,0,3,12};
	int temp;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		
		if(arr[j]==0)
		{
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			
		}
	}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
