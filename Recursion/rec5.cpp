//Check if an array is sorted or not: 
#include<iostream>
using namespace std;   
bool sorted(int a[],int n){
    // Base condition:kaun sa aaisa case hoga , jab pakka sai bol sakte ki array sorted h.
    if(n==1){
        return true;
    }
    // It will tell that rest of the array is sorted or not,it will return true or false,
    // if(a[0]<<a[1] && restArray){
    //     return true;
    // }
    // else false;
    bool restArray = sorted(a+1, n-1);
    // if the below expression is 'true' then it will return 'true',otherwise 'false'
    return (a[0]<a[1] && restArray);
    // if(a[0]<a[1] && restArray)
    //     return true;
      
    // else
    //   return false;
     
    
}
int main(){
    int n,i;
    cout<<"Enter the no of elements present in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements present in the array:"<<endl;
    for(int i = 0;i<n;i++){ 
    return 0;
    }
}