// Insertion Sort
#include<iostream>
using namespace std;
int insertionSort(int a[],int n){
    for(int i = 0;i<n;i++){
     int current = a[i]; 
     int j = i-1;
     while(a[j]>current && j>=0){
           a[j+1] = a[j];
           j--;
     }
      a[j+1] = current;

    }
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array after insertion sort:"<<endl;
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}