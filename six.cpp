#include<iostream>
using namespace std;
int main()
{
	string s ;
	cout<<"enter name:";
	getline(cin ,s);
	for(int i=s.length()-1;i>=0;i--)
	{
		cout<<s[i];
	}
	return 0;
}