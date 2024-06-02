#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,pos;
	cout<<"enter array elements"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter position to be deleted"<<endl;
	cin>>pos;
	for(i=pos;i<5;i++)
	{
		arr[i]=arr[i+1];
	}
	cout<<"new array is"<<endl;
	for(i=0;i<4;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
