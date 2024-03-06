// At least two greater elements

// Given an array of N distinct elements, the task is to find all elements in array except
// two greatest elements in sorted order.
#include<iostream>
using namespace std;
void sort(int n,int a[]){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[j]<a[i]){
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            }
        }
    }
    return;
}
void findElements(int a[], int n){
    sort(n,a);
    for(int i = 0;i<n-2;i++){
        cout<<a[i]<<" ";
    } 
     return;
}
    

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
    findElements(a,n);
return 0;
}

 
