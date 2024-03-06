// Find if there is any subarray with sum equal to 0: Optimised Approach
#include<iostream>
using namespace std;
bool subArrayExists(int a[],int n){
    //  int sum = 0   
      for(int i =0;i<n;i++){
         int sum = 0;
            for(int j = i;j<n;j++){
             sum = sum+a[j]; 
            
             if(sum == 0)
             return true;
        }
      }
      return false;

} 
int  main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elments present in the array:"<<endl;
    for(int i = 0;i<n ;i++){
        cin>>a[i];
    } 
    if(subArrayExists( a, n))
            cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    

    return 0;
}