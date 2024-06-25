#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	
    int i;
    int temp[n + 1];
    for(int i = 0; i <= n; i++){
      temp[i] = 0;
    }
  
    for(i = 0; i < n; i++){
      temp[arr[i] - 1] = 1;
    }


    int s;
    for (i = 0; i <= n ; i++) {
        if (temp[i] == 0)
            s = i  + 1;
    }
    cout << s;
    
    return 0;
}
