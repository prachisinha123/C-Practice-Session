// Ṛeverse the array
#include<iostream>
using namespace std;  
int main(){
 
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n; 
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array before reverse:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<endl;
    }
    int s = 0;
    int e = n-1;
    while(s<e){
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    
     cout<<"Reverse Array:"<<endl;
     for(int i = 0;i<n;i++){
        cout<<a[i];
     }
    

    return 0;

}


