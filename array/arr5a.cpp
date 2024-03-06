// Bubble Sort:
#include<iostream>
using namespace std;
  int BubbleSort(int a[],int n){
    int counter = 1;
    while(counter<n){
        for(int i = 0;i<n-counter;i++){
           if(a[i]>a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
           }  
        }
        counter++;
    }
  }
    int main(){
        int n;
        cout<<"Enter the value of n:"<<endl;
        cin>>n;
        int a [n];
        cout<<"Enter the elements in the array:"<<endl;
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Array after bubble sort:"<<endl;
        BubbleSort(a,n);
        for(int i = 0;i<n;i++){
            cout<<a[i]<<" "; 
        }
    return 0;
    }
