// Sum of all subarrays:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the arrays:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:"<<endl;
    for( int i = 0;i<n;i++){
        cin>>a[i];
    }
    // Here we are making the variable which is storing the current sum.
    // int curr = 0;
     for(int i = 0;i<n;i++){  
        int curr = 0;
        //    curr = 0;
           for(int j  = i;j<n;j++){
             curr = curr+a[j];
            cout<<curr<<endl;
           }
     }
     return 0;
}


