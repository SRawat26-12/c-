#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,9,1,5,8};
	int i,j;
	int size=sizeof(arr)/sizeof(arr[0]);
	for( i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[j];
	              arr[j]=arr[i];
	              arr[i]=temp;
			}
		}
		
	}
	
	cout<<"display"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
