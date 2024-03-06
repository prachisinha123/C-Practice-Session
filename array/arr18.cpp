// Count the smaller elements:Given an sorted array A of size N.Find number of elements which are less than 
// or equal ot given element X.
 #include<iostream>
using namespace std;
int smallElem(int a[],int n,int x){
    int count = 0;
   for(int i = 0;i<n;i++){
     if(a[i]<x)
        count++; 
   }
   return count;
}
int main()
{
int n,x;
cout<<"Enter the no of elements in the array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the elements of array:"<<endl;
for(int i = 0;i<n;i++){
    cin>>a[i];
}

cout<<"Enter the key element"<<endl;
cin>>x;
cout<<"The elements smaller than x in the array:"<< smallElem(a,n,x) <<endl;
    return 0;
}