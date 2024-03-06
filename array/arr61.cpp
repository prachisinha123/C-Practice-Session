// Find Index:
// Given an unsorted array Arr[] of N integers and a Key which is present in this array. 
// You need to write a program to find the start index( index where the element is first found from left
//  in the array ) and end index( index where the element is first found from right in the array ).
//  If the key does not exist in the array then return -1 for both start and end index in this case.
#include<iostream>
using namespace std;
 int findIndex(int a[], int n, int key){
    for(int i = 0;i<n;i++){
        if(a[i]==key){
        cout<<i<<" "; 
        break;
    } 
    else
    cout<<"-1";
    break;
 }
 for (int i=n-1; i>=0; i--){
            if (a[i] == key){
               cout<<i;
                break;
            }
            else
    cout<<"-1";
    break;
        }
 }
int main(){
     int n,key;
     cout<<"Enter the value of n:"<<endl;
     cin>>n;
     cout<<"Enter the value of key:"<<endl;
     cin>>key;
     int a[n];
     cout<<"Enter the elements present in the array:"<<endl;
     for(int i = 0;i<n;i++){
        cin>>a[i];
     }
    cout<<"Index of the key element from start and end:"<<endl;
     findIndex(a,n,key);

    return 0;
}