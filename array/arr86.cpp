// Find the second largest element in an array:Optimised code
#include<iostream>
#include<climits>
using namespace std;
 int print2Lrgest(int a[], int n){
        int largest = INT_MIN;
        for(int i = 0;i<n;i++){
            if(a[i]>largest){
                largest = a[i];
            }
        }
     int secondLargest = -1;
     for(int i  = 0;i<n;i++){
     if(a[i]!=largest && a[i]>secondLargest){
        secondLargest = a[i];
     }
    }
    return secondLargest;
 } 
int main(){
    int n;
    cout<<"Enter the value of number of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the value of elements in the array:"<<endl;
     for(int i = 0;i<n;i++){
        cin>>a[i];
     }
     cout<<print2Lrgest(a,n);
    return 0;
}