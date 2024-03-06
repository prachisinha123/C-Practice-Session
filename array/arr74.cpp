// Find all pairs on integer array whose sum is equal to given number.
#include<iostream>
using namespace std;
 int getPairsCount(int a[],int n,int k){
    int count = 0;
       for(int i = 0;i<n;i++)
          for(int j = i+1;j<n;j++)
             if(a[i]+a[j]==k)
             count++;  
       return count;
 }  
int main(){
  int n,k;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  cout<<"Enter the sum value as k:"<<endl;
  cin>>k;
  int a[n]; 
  cout<<"Enter the value of elements present in the array:"<<endl;
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Total pairs of the given number:"<<endl;
  cout<<getPairsCount( a, n, k);
return 0;
}