#include<iostream>
using namespace std;
#include<deque>
int main()
{

    deque<int>q;
    q.push_front(2);
    q.push_front(24);
    q.push_front(12);
    q.push_back(300);
    q.push_front(20);
    cout<<"size="<<q.size()<<endl;
    while(!q.empty())
    {

        cout<<q.back()<<endl;
        q.pop_back();
    }

}
