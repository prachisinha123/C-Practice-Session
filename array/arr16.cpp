// Sum of the eri,write a program to print the sum of the series
#include<iostream>
using namespace std;
int Sum(int a[],int n){
    int sum = 0;
    
    
}
int main()
{
 int n;
 cout<<"Enter the no of element in the array:"<<endl;
 cin>>n;
 int a[n];
 cout<<"Enter the elements of the array:"<<endl;
 for(int i = 0;i<n;i++){
 cin>>a[i];
 }
 int sum = 0;
 for(int i = 0;i<n;i++){
    sum = sum+a[i];
    cout<<sum;
 }
 
    return 0;
}