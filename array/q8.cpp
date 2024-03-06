// Question:Find Largest contiguous Subarray.
// Contiguous Array:Part of array , in which element is continuous.
// Algorithm:Kadane's algoritm
#include<iostream>
using namespace std;
// Here function is returning something so we are using int after function.
int maxSumArray(int A[],int n){
    int max_Sum = 0;
    int cur_Sum = 0;
    for( int i = 0;i<n;i++){
        cur_Sum = cur_Sum+A[i];
        if(cur_Sum>max_Sum){
            max_Sum = cur_Sum;
        }
        else if(cur_Sum<0){
            cur_Sum = 0;
        }
    }
    return max_Sum;
    
}
int main(){
    int i,A[100],n;
     cout<<"Enter the number of elements in the array"<<endl;
     cin>>n;
     cout<<"Enter the array A: "<<endl;
    for( i = 0; i<n; i++){
    cin>>A[i];
    }
    
    cout<<"Maximun contiguous sum:"<<endl;
    // Here we are storing the value of contiguous sum,
       int max_Sum = maxSumArray(A,n);
       cout<<max_Sum;
    return 0;
}  


