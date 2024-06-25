#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cout<<"enter a string";
	cin>>s;
//	for(int i=0;i<s.length();i++)
//	{
//		if(s[i]>='A'&&s[i]<='Z')
//		{
//		 s[i]=s[i]+32;
//		}	
//	}
transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s;
	
	return 0;
}
