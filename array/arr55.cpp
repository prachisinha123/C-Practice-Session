// Arrays (Sum of array):
// Given an array of N integers. Your task is to print the sum of all of the integers.
// 2nd Method: Optimised Approach
#include<iostream>
using namespace std;
 long long getSum (int n){

     long long sum = ((long long)n * (long long)(n + 1)) / 2;
   return sum;
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<getSum(n);
    return 0;
}