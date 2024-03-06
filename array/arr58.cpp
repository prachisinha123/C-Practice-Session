// Second Largest Element
// Given an array Arr of size N, print second largest distinct element from an array.

#include<iostream>
#include<climits>
using namespace std;
int print2largest(int a[], int n){
    int largest = INT_MIN;
    for(int i = 0;i<n;i++){
        if(a[i]>largest)
        largest = a[i];
    }
    int secondLargest = INT_MIN;
    for(int i = 0;i<n;i++){
        if(a[i]!= largest && a[i]>secondLargest)
        secondLargest = a[i];
    }
    return secondLargest;
}
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
    cin>>a[i];
    }
    cout<<print2largest( a,n);
    return 0;
}