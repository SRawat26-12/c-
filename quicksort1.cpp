#include<iostream>
using namespace std;
void part(int *a,int low,int high)
{
	int temp;
	int pv=a[low];
	int i=low+1;
	int j=high;
	do
	{
		while(a[i]<pv)
		{
			i++;
		}
		while(a[j]>pv)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}}
		while(i<j);
		temp=a[low];
		a[low]=a[j];
		a[j]=temp;
		return j;
		
	}
void qs(int *a,int low,int high)
{
	int pv;
	if(low<high)
	{
		pv=part(a,low,high);
		qs(a,low,p-1);
		qs(a,pv+1,high);
	}
}
