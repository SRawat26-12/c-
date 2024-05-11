#include<iostream>
using namespace std;
int main()
{
int amount ,n,rm;
cout<<"enter number";
cin>>amount;
n=amount/100;
cout<<"notes of 100:"<<n<<endl;
rm=amount-n*100;
n=rm/50;
cout<<"notes of 50:"<<n<<endl;
rm=rm-n*50;
n=rm/10;
cout<<"notes of 10:"<<n<<endl;
rm=rm-n*10;
n=rm/5;
cout<<"notes of 5:"<<n<<endl;
rm=rm-n*5;
n=rm/2;
cout<<"notes of 2:"<<n<<endl;
rm=rm-n*2;
n=rm/1;
cout<<"notes of 1:"<<n;
return 0;
}

