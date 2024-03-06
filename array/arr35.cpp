// Algorithm:Kadane's algoritm
// Optimised solution for Maximun subarray sum,
#include<iostream>
#include<climits>
using namespace std;
int main()
{
int n;
cout<<"Enter the number of elements present in the array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the elements present in the array :"<<endl;
for(int i = 0;i<n;i++){
    cin>>a[i];
}
int maxSum =  INT_MIN;
int currSum = 0;

for(int i = 0;i<n;i++){
     currSum = currSum+a[i];
    //  cout<<currSum;
     if (currSum < 0){
        currSum = 0; 
        }
        else if(currSum > maxSum){
            maxSum = currSum;
        }
}
//     currSum = currSum+a[i];
//      if(currSum > maxSum){
//         maxSum = currSum;
//      }
//      else if (currSum < 0)
//         currSum = 0; 
// }

cout<<"The Maximun subarray sum " << maxSum <<endl;
    return 0;
}


