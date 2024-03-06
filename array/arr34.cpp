// Optimised solution : Here we find the optimised solution for Maximun subarray sum ,in order to reduce time complexity
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements present in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int currsum[n+1];
    currsum[0] = 0;
    for(int i = 0;i<n;i++){
        currsum[i] = currsum[i-1] + a[i-1];
    }
    int maxSum = INT_MIN;
    for(int i = 0;i<n;i++){
        int sum = 0; 
    }

    return 0;
}