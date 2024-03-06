// Swap Kth elements:Given an array Arr of size N,swap the Kth element from beginning with kth element from end

#include<iostream>
using namespace std;
int swap(int a[],int k,int n ){
     if(k<=n ){
	        int temp = a[k-1];
            a[k-1]= a[n-k];
            a[n-k] = temp;
	    }
//    if(k <= n-1)
// {
//   int temp = a[k];
//    a[k]= a[(n-1)-k];
//    a[(n-1)-k] = temp;
//    }
}
int main()
{
int n ,k;
cout<<"Enter the no of elements present in the array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the elements of the array:"<<endl;
for(int i = 0;i<n;i++){
cin>>a[i];
}
cout<<"Enter the kth element to be replaced:"<<endl;
cin>>k;
cout<<"Array after swapping:"<<endl;
swap(a,k,n) ;
for(int i = 0;i<n;i++){
    cout<<a[i];
}
    return 0;
}