// C++ Array (print an element) :
// Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.
#include<iostream>
using namespace std;
int findElementAtIndex(int a[], int n, int k)
{
    // return a[k];
        while(k<=n-1)
        {
            for(int i = 0; i<n ;i++){
                if(i == k){
                return a[i];
                }      
        
         }   
    }
    return - 1;
}
int main()
{
    int n,k;
    cout<<"Enter the no of elements in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the no of elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
    cin>>a[i];
    }
    cout<<"Enter the  key index:"<<endl;
    cin>>k;
    cout<< "The element at the key index:" << findElementAtIndex(a,n,k) <<endl;
    return 0;
}
 