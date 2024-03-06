// BY Kadane Algorithm:Find the max sum of all the subarray formed in the circular array:
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter the no of elements in the array:"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements in the array:"<<endl;
  for(int i = 0;i<n;i++){
  cin>>a[i];
  }
  int maxSum = INT_MIN;
  int currSum = 0;
  for(int i = 0;i<n;i++){
      currSum = currSum + a[i%n];
  if (currSum < 0){
        currSum = 0; 
        }
        else if(currSum > maxSum){
            maxSum = currSum;
        }
 }
cout<<"Mximun subarray sum in circular  array:"<<endl;
cout<<maxSum <<endl;
return 0;
}
