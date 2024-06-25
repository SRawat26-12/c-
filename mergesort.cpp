#include<iostream>
using namespace std;
void merge(int a[],int low ,int mid,int high)
{
	int i,j,k,b[7];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=low;i<=high;i++)
	{
		a[i]=b[i];
	}
}
void msort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
	
	mid=(low+high)/2;
	msort(a,low,mid);
	msort(a,mid+1,high);
	merge(a,low,mid,high);
}
}
void printarr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t ";
	}
	cout<<endl;
}
int main()
{
	int a[]={3,5,2,13,12,10,6};
	int n=7;
	printarr(a,n);
	msort(a,0,n-1);
	cout<<"after merge sort"<<"\n";
	printarr(a,n);
	return 0;
}
	

