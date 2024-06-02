#include<iostream>
using namespace std;
int part(int a[],int low,int high)
{
	int temp;
	int pvt=a[low];
	int i=low+1;
	int j=high;
	do
	{
		while(a[i]<pvt)
		{
			i++;
		}
		while(a[j]>pvt)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}while(i<j);
	
		temp=a[low];
		a[low]=a[j];
		a[j]=temp;
		return j;
	}


void qs(int a[],int low,int high)
{
	int pv;
	if(low<high)
	{
		pv=part(a,low,high);
		qs(a,low,pv-1);
		qs(a,pv+1,high);
	}
}
void printarr(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[]={8,2,3,60,9,50};
	int n=sizeof(a)/sizeof(a[0]);
	printarr(a,n);
	qs(a,0,n-1);
	cout<<"after quick sort\n";
	printarr(a,n);
	return 0;
}
