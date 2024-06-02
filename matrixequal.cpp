#include<iostream>
using namespace std;

int main()
{
	int arr1[3][3];
	int arr2[3][3],f=0;
	cout<<"enter elements of first matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;i<3;j++)
		{
			cin>>arr1[i][j];
		}
	}
		cout<<"enter elements of second matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;i<3;j++)
		{
			cin>>arr2[i][j];
		}
	}
		for(int i=0;i<3;i++)
	   {
		for(int j=0;i<3;j++)
		{
		if(arr1[i][j]!=arr2[i][j])
		{
		f=1;
		break;	
		}
		}
	}
	if(f==1)
	{
		cout<<"matrix not equal";
	}
	else
	{
		cout<<"matrix equal";
	}
	

	return 0;
}
