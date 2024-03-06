// Find the first occurrence of the number:
#include<iostream>
using namespace std;
int firstocc(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if (a[i]==key){
        return i;
    } 
    return firstocc(a,n,i+1,key);
    
}
int main()
{
    int n,key,i;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
   
    int a[n];
    cout<<"Enter the element of the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
     cout<<"Enter the value of key:"<<endl;
    cin>>key;
    cout<<firstocc(a,n,i,key)<<endl;
    return 0;
}