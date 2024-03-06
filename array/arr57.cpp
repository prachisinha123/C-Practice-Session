// Palindromic Array:
// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. 
// Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.
#include<iostream>
using namespace std;
int PalinArray(int a[],int n){
    for(int i = 0;i<n;i++){
    for(int i = 0;i<n;i++){
        if(a[i]==a[n-i-1])
        return 1;
    }
    return 0;
    }
    
    

}
int main(){
    int n; 
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0;i<n;i++){
     cin>>a[i];
    }
    cout<< PalinArray(a,n);
    return 0;
}