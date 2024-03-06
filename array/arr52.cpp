// Print alternate elements of an array
// You are given an array A of size N. You need to print elements of A in 
// alternate order (starting from index 0).
#include<iostream>
using namespace std;
void printAlter(int n,int a[]){
    for(int i = 0;i<n;i++){
        if(i%2==0)
        cout<<a[i]<<" ";
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter the number of elements present in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    printAlter(n,a);
  return 0;
}