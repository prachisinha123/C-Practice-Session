// Find second largest element in an array
#include<iostream>
using namespace std;
int secLargest(int a[],int n){
    int ans ;
    for(int i = 0;i<n;i++){
         for(int j = i+1;j<n;j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            } 
         }
    }
    // cout<<a[n-2]<<endl; 
    ans = a[n-2];
    return ans;
}
int main(){
   int n,ans;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   int a[n];
   cout<<"Enter the elements present in the array:"<<endl;
   for(int i = 0;i<n;i++){
      cin>>a[i];  
   }
   cout<<secLargest(a,n);
//    for(int i = 0;i<n;i++){
//     cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    cout<<a[1];

    return 0;
}
