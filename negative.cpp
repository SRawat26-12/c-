#include <iostream>
using namespace std;
int main()
{

int arr[10];
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"enter element in array";
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}
for(int i=0;i<size;i++)
{
	if(arr[i]<0)
	{
		cout<<arr[i]<<" ";
	}
}

return 0;
}
