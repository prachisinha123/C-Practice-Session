// Find the second largest element in an array:
#include<iostream>
using namespace std;
void secLargest(int a[],int n){
    for(int i = 0;i<n ;i++){
        for(int j = i+1;j<n;j++){
            if(a[j]<a[i]){
              // If the element at jth position is less than element at ith position,then swap the both element.
              //  Swap logic:  
               int temp = a[i];
               a[i] = a[j];
               a[j] = temp;
            }
        }
    }
    cout<<a[n-2];
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements present in the array:"<<endl;
    for(int i = 0;i<n ;i++){
       cin>>a[i];
    }
    cout<<"Second largest element present in the array:"<<endl;
    
    secLargest (a,n);
    return 0;
}