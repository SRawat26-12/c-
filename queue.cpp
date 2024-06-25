#include<iostream>
using namespace std;
class node
{

    public :int frwd,prev;
    int *arr;
    node()
    {

        frwd=-1;
        prev=-1;
        arr=new int[5];
    }
    void push(int d)
    {

        if(prev==4)
        {

            cout<<"overflow\n";
        }
        prev++;
        if(frwd==-1)
        {

            frwd++;
        }
        arr[prev]=d;
    }
    void peek()
    {
        if(frwd<0||frwd>prev)
        {

            cout<<"\n no data";
        }
        else{
            cout<<"top data="<<arr[frwd]<<endl;
        }


    }
    void pop()
    {
      if(frwd<0||frwd>prev)
      {

          cout<<"there is no data\n";
      }
      else{
        frwd++;
      }

    }
    void show()
    {

        while(frwd<=prev)
        {
          cout<<arr[frwd]<<"\n";
          frwd++;

        }
    }
};
int main()
{

    node h;
    h.push(20);
    h.push(23);
    h.push(78);
    h.push(98);
    h.peek();
    h.pop();
    h.peek();
    cout<<"entire queue\n";
    h.show();
}
