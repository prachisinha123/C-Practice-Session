// Naive solution:
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"Enter the number of elements in the array"<<endl;
//    cin>>n;
//    int array[n];
//    cout<<"Enter the elements of the arrray:"<<endl;
//    for(int i = 0;i<n ;i++){
//       cin>>array[i];

//    }
//    int max = array[0];  '
//    int min = array[0];
//    for(int i = 0;i<n;i++){
//         if(array[i]<min){
//              min = array[i];

//         }
//         if(array[i]>max){
//             max = array[i];

//         }
//     }
//   cout<<"The minimun element in the array:"<<min<<endl;
//   cout<<"The maximun element in the array:"<<max<<endl;
// }

// 2nd approach:
#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int array[n];
for(int i  = 0; i<n; i++)
{
  cin>>array[i];  
}
// For finding the maximun and minimun : we compare every elements of array by pur maximun and minimun element;
// Here we have to initialize the maximum and minimun value,so to initialize this,we use INT_MIN,or INT_MAX
// INT_MIN:It is the minimun integer possible in c++.
// INT_MAX:It is the maximun integer possible in c++.
// For this we have to use an headerfile,climits.
// We are giving INT_MAX to the minNo, so that if we get any minimun value our minNo will updated,similarly
// for maxNo.
int maxNo = INT_MIN;
int minNo = INT_MAX;


for(int i = 0;i<n;i++)
{ 
    // In order to reduce the step ,we use max() function,it is ab built-in function, it will provide the maximum of two number that we will 
    // we will provide to it ,it will compare the current maximum number and array[i].
    
    maxNo = max(maxNo,array[i]);
    minNo = min(minNo,array[i]);
}
//    if(array[i]>maxNo){
//      maxNo = array[i];
//      }
//    if(array[i]<minNo){
//      minNo = array[i];
//    }
cout<<"The max and min numbers are:"<<endl; 
cout<<maxNo<<" "<<minNo<<endl;
return 0;
}
