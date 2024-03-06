#include<iostream>
#include<climits>
using namespace std;
int maxTilli(int a[],int n){
    int mx = 0;
    for(int i = 0;i<n;i++){
      mx =  max(mx,a[i]) ;  
    }
    return mx;
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
    cout<< maxTilli( a,n);
 return 0;
}