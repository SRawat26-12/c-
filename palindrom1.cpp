#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cout<<"enter a string";
	cin>>s;
	string b=s;
	reverse(s.begin(),s.end());
	if(b==s)
	{
		cout<<"palindrom";
	}
	else
	{
		cout<<"not palindrome";
	}
	
	return 0;
}
