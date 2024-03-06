// Find the "kth" max and min element in an array.
// #include<iostream>
// using namespace std;
// int main(){
// int a[] ={5,8,12,7,2,4};
// int k = 4; 
// // Here we are sortimg elements in ascending order
// // void kth_element(int a,int k,int temp,int i,intj){
// for(int i = 0; i<sizeof(a)-1; i++){
//     for(int j = i+1; j<sizeof(a); j++)
//     {
//         // If the element at ith position is less than element at jth position,then swap the both element.
//         if(a[i] < a[j])
//         {
//             //  Swap logic:
//             int temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//         }
//     }
//     // Now here we provide the condition after for loop,that if i is equal to k-1,then print that number
//     if(i == k-1){
//         cout<<"Largest kth element "<<a[i]<<endl;

//     }

// }
// cout<<"------------------"<<endl;
// for(int i=0;i<sizeof(a);i++)
// {
//     cout<<"Sorted array is given by"<<endl;
// }
// return 0;
// }
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements in the array:"<<endl;
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
 int k;
 cout<<"Enter the value of k:"<<endl;
 cin>>k;
  
    return 0;
}

 