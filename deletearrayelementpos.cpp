#include<iostream>
using namespace std;
int main()
{

    int arr[50], i, pos, n;

    // Prompt user for input
   
    cout<<"enter element";
    cin>>n;

    // Input values for the array
    cout<<"enter number";
    for (i = 0; i < n; i++) {
        
        cin>>arr[i];
    }

    // Input the position to delete
    cout<<"enter the position"<<endl;
    cin>>pos;

    // Locate the position in the array
    i = 0;
    while (i != pos - 1)
        i++;

    // Shift elements to the left to replace the deleted element
    while (i < n) {
        arr[i] = arr[i + 1];
        i++;
    }
    n--;

    // Display the new list after deletion
    cout<<"the new list is"<<endl;
    for (i = 0; i < n; i++) {
        cout<<arr[i];
}
cout<<endl;
    return 0;
}
