// Maximum subarray sum in circular array
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements present in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++) {
        // cout << i;
        // cout << endl;
        for(int j = i+1; j < n+i+1; j++) {
            int sum = 0;
            for(int k = i; k < j ; k++) {
                  sum = sum + a[k%n];
                  
                  
                // cout <<  a[k % n] <<" "; 
            }
            maxSum = max(maxSum,sum)  ;  
        }   
    }
    cout<<"Mximun subarray sum in circular  array:"<<endl;
    cout<<maxSum <<endl;


    return 0;
}