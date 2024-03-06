// Sum of elements of the array.
#include<iostream>
using namespace std;
int getSum(int a[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++) 
    {
        sum = sum + a[i];
    
    }
    return sum;
}
int main(){
  int n;
  cout<<"Enter the no of elements in the array:"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements of array:"<<endl;
  for(int i = 0;i<n;i++){
     cin>>a[i];
  }
  cout<<"Sum of the array:" <<getSum(a,n) <<endl;
 return 0;
}