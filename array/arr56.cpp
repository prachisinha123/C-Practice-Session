// Value equal to index value
// Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing )
// Note: There can be more than one element in the array which have the same value as its index. You need to include every such element's index. Follows 1-based indexing of the array.

// Example 1:

// Input:
// N = 5
// Arr[] = {15, 2, 45, 12, 7}
// Output: 2
// Explanation: Only Arr[2] = 2 exists here.
#include<iostream>
#include<vector>
using namespace std;
vector<int> valueEqualToIndex( vector<int> &ans,int a[], int n){
    //  vector<int>ans;
	   for(int i = 1;i<=n;i++){
	       if(a[i]==i)
	       ans.push_back(a[i]);
	   }
	    return ans;
}
int main(){
    int n;
    vector<int>ans;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elemnts in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<" Value equal to index:"<<endl;
    valueEqualToIndex(ans,a,n);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    
}