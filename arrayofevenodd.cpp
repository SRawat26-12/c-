#include<iostream>
using namespace std;

int main()
{
	int arr1[3][3];
	int arr2[3][3];
	
	cout<<"enter elements of first matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;i<3;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"second matrix elements"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr2[i][j];
		}
	}
	cout<<"addition of two matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
