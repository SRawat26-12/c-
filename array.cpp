#include<iostream>
using namespace std;
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
  for(int i = 0; i < 3; i++){  
            int j, last;  
             
            last = arr[n-1];  
          
            for(j = n-1; j > 0; j--){  
               
                arr[j] = arr[j-1];  
            }  
            
            arr[0] = last;  
        }  
		
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
