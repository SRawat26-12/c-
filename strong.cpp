
#include<iostream>
using namespace std;
void  swp(int n){
   int a=n%10;
   int c=a;
   n=n/10;
   int s=0;
   while(n!=0){
       int rem=n%10;
       s=s*10+rem;
       n=n/10;
   }
   int b=s%10;
   s=s/10;
   while(s!=0){
    int rem=s%10;
    a=a*10+rem;
    s=s/10;
   }
   a=a*10+b;
   if(c==0){
    cout<<"0"<<a;
   }
   else{
    cout<<a;
   } 
    
}
int main(){
    swp(123);
    cout<<"\n";
    swp(2349586);
    cout<<"\n";
    swp(5670);
    return 0;
}
