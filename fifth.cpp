#include<iostream>
using namespace std;
class Student{
string name;
int age;
string country;
public:void setName(string s)
{
	name=s;
}
void setAge(int a)
{
	age=a;
}
void setCountry(string c)
{
	country=c;
}
string getName()
{
	return name;
}
int getAge()
{
	return age;
}
string getCountry()
{
	return country;
}

};
int main()
{
	Student d;
	d.setName("shivam");
	d.setAge(24);
	d.setCountry("india");
	cout<<"name:"<<d.getName()<<endl;
	cout<<"age:"<<d.getAge()<<endl;
	cout<<"country:"<<d.getCountry();
	return 0;
}
