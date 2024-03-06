// Arrays (Sum of array):
// Given an array of N integers. Your task is to print the sum of all of the integers.
// 1st method: program took more time than expected.More time complexity.
#include<iostream>
using namespace std;
    // int getSum(int n) {
    //     int sum = 0;
    long long getSum(int n) {
        int sum = 0;
        for(int i = 0;i<=n;i++){
            sum = sum+i;             
    }
    return sum;
    }

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Sum of the series till n:"<<endl;
    cout<< getSum(n);
    return 0;
}