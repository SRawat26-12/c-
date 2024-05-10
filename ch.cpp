#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"enter character"<<endl;
cin>>ch;
if(ch>='a'&&ch<='z')
{
	cout<<"character is  lowercase alphabet";
}
else if(ch>='A'&&ch<='Z')
{
	cout<<"character is uppercase alphabet";
}

	return 0;
}
