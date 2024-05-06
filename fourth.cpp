#include<iostream>
using namespace std;
class Rectangle
{
	int l,b;
	public:Rectangle(int a,int c)
	{
		l=a;
		b=c;	
	}
	void area()
	{
		int ar=l*b;
		cout<<"area:"<<ar<<endl;
	}
	void perimeter()
	{
		int p=2*(l+b);
		cout<<"perimetre is:"<<p;
	}
	
};
int main()
{
	Rectangle r(10,20);
	r.area();
	r.perimeter();
	return 0;
}
