// Convert a list of characters into a String
// Given a list of characters, merge all of them into a string.
#include<iostream>
using namespace std;
 string chrTostr(char a[],int n){
      string res;
      for(int i = 0;i<n;i++){
        // res+= a[i];
         res=res+ a[i];
      }
      return res;
     
 }
int main(){
    int n;
    
    cout<<"Enter the no of elements present in the string:"<<endl;
    cin>>n;
    char a[n]; 
    cout<<"Enter the elements in the character array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"After storing the character array into string:"<<endl;
    cout<<chrTostr(a,n);
    return 0;
}