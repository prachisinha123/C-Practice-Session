// Print alternate elements of an array,
// You are given an array A of size N. You need to print elements of A in alternate order (starting from index 0).
// Naive Approach:The smallest approach to solve this problemis to traverse the given array.and check if 
// the position of the current element is odd or not.If found to be true,then print the current element.
#include<iostream>
using namespace std;
void printAlter(int a[],int n){
    for(int currIndex = 0; currIndex<n; currIndex++){
           if(currIndex % 2 == 0){
              cout<< a[currIndex] << " ";   
            // return a[currIndex];    
           }
    }
}
int main()
{
int n;
cout<<"Enter the number of element in the array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the  elements of the array:"<<endl; 
for(int i = 0 ;i<n;i++){
    cin>>a[i];
}
cout<<"The alternate element of the array:"<<endl;
printAlter(a,n);

   return 0;
}
// Effecient Approach:To optimize the above solution , the idea is to traverse only those elements of the array 
// which  are present at odd positions.Follow the steps below to solve the problem:
// 1)Iterate a loop variable currIndex from 0 to N.
// 2)Print the value of a[currIndex] and
// increment the value of currIndex by 2 until currIndex exceeds n.

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the 
"
    return 0;
}

 