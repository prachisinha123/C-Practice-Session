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
    // int n,i,key;
    // cout<<"Enter the value of n:"<<endl;
    // cin>>n;
    // int a[n];
    // cout<<"Enter the elements in the array:"<<endl;
    // for(int i = 0;i<n;i++){
    //     cin>>a[i];
    // }
    // cout<<"Enter the key element:"<<endl;
    // cin>>key;
    // for(int i = 0;i<n;i++)
    int a[]={4,2,1,2};
    cout<<firstocc(a,4,0,2)<<endl;
    
    return 0;
}