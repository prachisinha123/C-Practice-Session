// Print Elements of Array:
// Given an array Arr of size N, print all its elements.
#include<iostream>
using namespace std;
int printElem(int a[], int n ){
     for(int i = 0;i<n;i++){
        cout<< a[i] << " ";
     }
     
}

int main(){
int n;
cout<<"Enter the no of elements in the array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the elements of the array:"<<endl;
for(int i = 0;i<n;i++){
    cin>>a[i];
}
 printElem(a,n) ;
    return 0;
}