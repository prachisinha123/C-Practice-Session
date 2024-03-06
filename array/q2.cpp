// (Q) Find the maximun and minimum element in array
#include<iostream>
#include<climits>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i = 0;i<n;i++){
        if(a[i]>maxNo)
        maxNo = a[i];
    }

    cout<<"Maximun number in the array:"<<endl;
    cout<<maxNo<<endl;

     for(int i = 0;i<n;i++){
        if(a[i]<minNo)
        minNo = a[i];
    }

    cout<<"Minimun number in the array:"<<endl;
    cout<<minNo<<endl;
    return 0;
    
}











