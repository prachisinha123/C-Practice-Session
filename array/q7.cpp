// Algorthm:
// Store the last element in a variable say x.
// Shift all elements one position ahead.
// Replace first element of array with x.
// Question:Program to rotate the array by one.
#include<iostream>
using namespace std;
// Function to cyclically rotation of array.
void rotate_array(int a[],int n){
     
        int last = a[n-1],i;
        for( int i = n-1;i>0;i--){
        a[i] = a[i-1];
        }
        a[0] = last; 
}
int main()
{
     int n;
     cout<<"Enter the number of elements in the array"<<endl;
     cin>>n;
     int a[n];
     cout<<"Enter the array A: "<<endl;
    for(int i = 0; i<n; i++){
    cin>>a[i];
    }

    cout<<"Array after rotation: "<<endl;
    rotate_array(a,n);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}