// Rearrange the array in alternating positive and negative itms with o(1) extra space.
#include<iostream>
using namespace std;

int main(){ 
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the elements present in the array:"<<endl;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
   
    return 0;
}