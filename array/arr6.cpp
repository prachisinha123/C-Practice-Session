#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements  in the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i]; 
    } 
    for(int i = 1;i<n;i++){
          int current = arr[i];
          int j = i-1;
          while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];  
            j--;
            // by doing j--,it should not to be 0,so for this we applied a condition.
          }
        arr[j+1] = current;
    }
    // for(int i = 1;i<n;i++){
    //     int current = arr[i];
    //     int j = i-1;
    //     while(arr[j]>current && j>=0){
    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = arr[i];
    //     }
    // }
    cout<<"Array after sorting:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;

    }
return 0;
}

