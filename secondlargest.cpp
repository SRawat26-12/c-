#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"enter array elements";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"secondlargest="<<arr[1];
	return 0;
	
}
