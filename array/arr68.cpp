// Find the elements in the array with highest frequency:
#include<iostream>
using namespace std;
int highFreq(int a[],int n){
     int count = 1; 
    int maxCount = 0; 
    int element_having_max_freq;
    for(int i = 0;i<n;i++){
           
         for(int j = 0;j<n;j++){ 
            if(a[i] == a[j]){
                count = count + 1;
               
            }    
         }
         if(maxCount<count){
            maxCount = count; 
              element_having_max_freq = a[i];

         }
    }
    return  element_having_max_freq ;
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Element having maximum frequency:"<<endl;
    cout<< highFreq (a,n);
    return 0;
}