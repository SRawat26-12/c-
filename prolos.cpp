#include<iostream>
using namespace std;
int main()
{
int py,ch,bio,math,computer;
cout<<"enter py marks"<<endl;
cin>>py;
cout<<"enter ch marks"<<endl;
cin>>ch;
cout<<"enter bio marks"<<endl;
cin>>bio;
cout<<"enter math marks"<<endl;
cin>>math;
cout<<"enter computer marks"<<endl;
cin>>computer;
int total=py+ch+bio+math+computer;
double per=total/5;
if(per>=90)
cout<<"Grade A";
else if(per>=80)
{
	cout<<"Grade B";
}
else if(per>=70)
cout<<"GRADE C";
else if(per>=60)
cout<<"grade d";
else if(per>=40)
cout<<"grade e";
else if(per<40)
cout<<"grade f";

return 0;
}
