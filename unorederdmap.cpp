#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    unordered_map<int,int>up;
    up.insert({1,21});
    up.insert({3,22});
    up.insert({5,20});
    up.insert({4,21});
    up.insert({2,19});
    for(auto p:up)
    {

        cout<<p.first<<"\t"<<p.second<<endl;
    }
}
