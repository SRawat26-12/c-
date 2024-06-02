#include<iostream>
using namespace std;

int main()
{
int arr[5]={1,2,2,3,3};
int i,j,k,n=5;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]==arr[j])
		{
			for(k=j;k<n;k++)
			{
				arr[k]=arr[k+1];
			}
			j--;
			n--;
		}
	}
}
for(i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
	return 0;
}
