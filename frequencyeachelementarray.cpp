#include<iostream>
using namespace std;

void countfrequency(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int flag=0;
		int count=0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=1;
				break;
			}
		
		}
		if(flag==1)
		continue;
		for(int j=0;j<=i;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		cout<<arr[i]<<"appears"<<count<<"times"<<endl;
	}
}
int main()
{
	int arr[]={1,2,3,5,2,9,7,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	countfrequency(arr,n);
	return 0;
}
