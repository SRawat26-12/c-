#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[100];
	cout<<"enter a string";
	cin.getline(str,100);
	char *ptr;
	ptr=strtok(str,",");
	cout<<"string:"<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr<<endl;
		ptr=strtok(NULL,",");
	}
	return 0;
}
