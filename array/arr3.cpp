// Linear Searching
#include<iostream>
using namespace std;

int linearSearch(int array[],int key,int n){
    for(int i = 0;i<n;i++){
     if(array[i] == key){
        return i;
     }
    }
  return - 1;
}
int main()
{
    int n, i;
    int key;
    cout<<"Enter the no of elements present in array:"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements present in array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>array[i];
    }
     
    cout<<"The key element is:"<<endl;
    cin>>n;
    cout<<"The index of the key element:"<<endl;
    cout<<linearSearch(array,n,key)<<endl;
    

    // cout<<"The index of the key element:"<<endl;
    // linearSearch(array,key,n);
    // cout<<i;
    
return 0;
}
// Time Complexity:O(n),if size of the array is n
// For linear search,if the size of the array is n,then we have to traverse whole array,so the
// time-complexity is O(n).

