// Given an array Arr of N positive integers. Your task is to find the elements whose
//  value is equal to that of its index value ( Consider 1-based indexing ).  
// 1)By linear search:
// 2)By Binary linear Search: 
#include<iostream>
using namespace std;
int LinearSearch(int a[],int n,int key){
    for(int i = 0;i<n;i++){
        if(a[i] == key){
            return i;
        }
    }
   return -1;
}
int main()
{
    int n,i;
    int key;
    cout<<"The number of element present in the element:"<<endl;
    cin>>n;
    int a[n];
    cout<<"The elements of array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the key element:"<<endl;
    cin>>key;
    cout<<"The index of the key element:"<<endl;
    cout<<LinearSearch(a,n,key)<<endl;
    return 0;
}
