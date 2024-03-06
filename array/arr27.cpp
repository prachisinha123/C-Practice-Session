// 2D array: Print the 2 dimensional array 
#include<iostream>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 int arr[n][m];
 for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        cin>>arr[i][j];
    }
 }
 cout<<"Matirx is :\n";
 for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        cout<<arr[i][j]<< " ";
    }
    cout<<"\n";
 }
 cout<<"Enter the number which we want to find:"<<endl;
 int x;
 cin>>x;
 bool flag = false;
 for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(arr[i][j] == x){
            cout<<i<<" "<<j<<"\n";
            flag = true;
        }
    }
 }
 if(flag){
    cout<<"Element is found\n";   
 }
 else
 {
    cout<<"Elements is not found\n " ;
 }


    return 0;
}