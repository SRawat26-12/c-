#include<iostream>
using namespace std;
class Circle{
	double r;
	public:Circle(double n)
	{
		r=n;
	}
	public:void area()
	{
		double ar=3.14*r*r;
		cout<<ar<<endl;
		
	}
	void circum()
	{
		double cu=2*3.14*r;
		cout<<cu;
		
	}
};
int main()
{
Circle c(2.0);
c.area();
c.circum();
return 0;
	
}
