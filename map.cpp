#include<iostream>
using namespace std;
#include<map>
int main()
{
   /* map<int,string,greater<int>>mp;
    mp.insert({1,"sun"});
    mp.insert({7,"mon"});
    mp.insert({6,"sat"});
    for(auto p:mp)
    {

        cout<<p.first<<"\t"<<p.second<<endl;


    map<string ,int>mp;
    int n,age;
    string name;
    cout<<"how many records\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter your age"<<endl;
        cin>>age;
        mp.insert({name,age});
    }
    cout<<"display data "<<endl;
    for(auto p:mp)
    {

        cout<<p.first<<"\t"<<p.second<<endl;
    }
    cout<<"which key you want to delete"<<endl;
    cin>>name;
    cout<<mp.erase(name);
    cout<<"after deleted"<<endl;
    for(auto p:mp)
    {

        cout<<p.first<<"\t"<<p.second<<endl;
    }*/
    //Q.1 main lexiography order and count the frequency also.
    map<string,int>mp;
    int n;
    string name;
    cout<<"how many records/n";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cout<<"enter name\n";
        cin>>name;
        mp[name]++;

    }
for(auto p:mp)
{

    cout<<p.first<<"\t"<<p.second<<"\n";
}



}
