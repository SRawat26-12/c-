#include <iostream>
using namespace std;
int main()
{

int i,j,k;
for( i=0;i<5;i++)
{
	for(j=1;j<5-i;j++)
	{
		cout<<" ";
	}
int	n=1;
	for(k=0;k<=i;k++)
	{
		cout<<n<<" ";
		n=n*(i-k)/(k+1);
	}
	cout<<endl;
}
return 0;
}
