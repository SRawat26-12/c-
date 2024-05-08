#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout<<"enter array elements";
	int s=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	int n;
	cout<<"enter number dou you want to find";
	cin>>n;
	int c=0;
	for(int i=0;i<s;i++)
	{
		if(arr[i]==n)
		{
			c++;
			
			
		}

	}
		cout<<n<<"presents"<<c<<"times";
	return 0;
}
