#include<iostream>
using namespace std;
int largest(int arr[],int k,int r)
{
for(int i=0;i<r;i++)
{
	for(int j=0;j<r-1-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			int temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
	}
	}
	return arr[k];
}
int main()
{
	int arr[]={12,3,5,7,19};
	int s=sizeof(arr)/sizeof(arr[0]);
	int n;
	cout<<"enter position";
	cin>>n;
	cout<<"largest"<<largest(arr,n,s);
	return 0;
}

