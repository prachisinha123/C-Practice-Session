// How to print all possible subarray,and how to print Maximun subarray sum:
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
for(int i = 0;i<n;i++){
cin>>a[i];
}
int maxSum = INT_MIN ;
 // this loop is for starting point.
for(int i = 0;i<n;i++){
    // this loop is for starting point.
    for(int j = i;j<n;j++){
         int sum = 0; 
        // Now we have to apply the loop to print the element.In this we print the1
        for(int k = i;k<=j;k++){
            // cout<<a[k] <<" " 
            sum = sum + a[k];}
            // sum++;
        
        // cout<<endl;
        maxSum = max(maxSum,sum);
        }
    }
    cout<<"The maximun sum of subarray:"<<endl;
  cout<< maxSum <<endl;
 

return 0;
}
// In this we have seen that we are using 3 loop,so the time complexity increases ot is O(n^3).
// So we have to find a optimised solution for this.