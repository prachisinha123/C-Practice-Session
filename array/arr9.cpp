// Longest Arithmetic Subarray:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the number of elements of the array:"<<endl;
    for ( int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    int ans = 2; 
    // Minimum possible length of required subarray is 2
    int pd = a[1] -a[0];
    // store the length of current subarray 
    int j = 2;
    int curr = 2;
    while(j<n){

        if(pd == a[j] - a[j-1] )
        {
        curr++;
        }
        else{
            pd = a[j] -a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<"The result is"<<endl;
    cout<< ans <<endl;
    return 0;
}