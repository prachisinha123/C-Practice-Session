// Find triplets with zero sum:
// Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements present in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];       
    } 
    int sum = 0,i,j,k;
 
    for( i = 0;i<n-2;i++){
        for( j = i+1;j<n-1;j++){
            for( k = j+1;k<n;k++){
                 sum = a[i]+a[j]+a[k];
                 if(sum == 0){
                    cout<<"Triplet is found"<<endl;
                    cout << a[i]<<" "<<a[j]<<" "<<a[k];
                    return 0;
                 }
 
        }
    } 
}
 

 if(sum != 0){
                  cout<<"Triplet is not found"<<endl;
 }
 
return 0;
}