// Find if there is any subarray with sum equal to 0:Naive Approach
#include<iostream>
using namespace std;
void sum0 (int a[],int n){
    for(int i = 0;i<n;i++){
        int Sum = 0;
         for(int j = i ;j<n;j++){
            Sum = Sum+a[j];
            if(Sum==0){
            // cout<<currSum<<endl;
            cout<<"Yes"<<endl;
            }
            else
            cout<<"No"<<endl;
         } 
    } 
}
int main(){
   int n;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   int a[n];
   cout<<"Enter the elements present in the array:"<<endl;
   for(int i = 0;i<n;i++){
   cin>>a[i];
   }
   cout<<"Subarray with sum 0 are present or not:"<<endl;
     sum0 (a,n);
    return 0;
}