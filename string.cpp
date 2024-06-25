#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1="weLcome";
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	cout<<s1;
//	string s2="cybrom";
//	reverse(s1.begin(),s1.end());
//	cout<<s1<<endl;
//	sort(s1.begin(),s1.end());
//	cout<<s1<<endl;
//	sort(s1.begin(),s1.end(),greater<int>());
//	cout<<s1;
	return 0;
}
