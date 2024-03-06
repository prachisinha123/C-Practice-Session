// Sum of Array Elements:
#include<iostream>
using namespace std;
int sumElement(int a[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum+a[i];
    }
    return sum;
}
int main(){ 
    int n;
    
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
   
    cout<<"Sum of the array:"<<endl;
    cout<<sumElement(a,n);
    return 0;

}