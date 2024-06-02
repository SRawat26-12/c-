#include<iostream>
using namespace std;
int main()
{
int arr[50],i,pos,num;
cout<<"enter array elements";
for(i=0;i<5;i++)
{
	cin>>arr[i];
}
cout<<"enter pos and no."<<endl;
cin>>pos>>num;
for(i=4;i>=pos;i--)
{
	arr[i+1]=arr[i];
}
arr[pos]=num;
cout<<"new"<<endl;
for(i=0;i<6;i++)
{
	cout<<arr[i]<<" ";
}
	return 0;
}
