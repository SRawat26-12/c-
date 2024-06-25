#include<iostream>
using namespace std;
#include<queue>
int main()
{

    queue<int>q;
    q.push(10);
    q.push(4);
    q.push(40);
    q.push(59);
    q.push(43);
    cout<<"size="<<q.size()<<endl;
    while(!q.empty())
    {

        cout<<q.front()<<endl;
        q.pop();
    }
}
