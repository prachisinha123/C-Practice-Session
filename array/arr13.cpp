// Find the  second largest elements in array
#include<iostream>
#include<climits>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the number of elements in an array:"<<endl;
 cin>>n;
 int a[n];
 cout<<"Enter the elements of array:"<<endl;
 for(int i = 0;i<n;i++){
    cin>>a[i];
 }  
 int largest = INT_MIN;
 int secLargest = INT_MIN;

 for(int i = 0;i<n;i++){
    if(a[i]>largest){
        secLargest = largest;
        largest = a[i];
    }
    else{
        if(a[i]>secLargest && a[i]<largest)
        {
            secLargest = a[i];
        }
    }
 }
 cout<<"The second largest value is"<<endl;
 cout<<secLargest<<endl;

    return 0; 
}
