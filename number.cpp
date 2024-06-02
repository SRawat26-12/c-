#include<iostream>
using namespace std;
void digit(int p,string s[])
{
	if(p==0)
	{
		return;
	}
	int i=p%10;
	p=p/10;
	digit(p,s);
	cout<<s[i]<<" ";
}
int main()
{
int p;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
cout<<"enter digit";
cin>>p;
digit(p,arr);
return 0;
}

