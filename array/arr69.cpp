#include<iostream>
using namespace std;
int highFreq(int a[],int n){
    int maxFreq = 0;
    int mostFrequent ;
    for(int i = 0;i<n;i++){
        int countFreq = 1;
        for(int j = 0;j<n;j++){
            if(a[i]== a[j]){
                countFreq = countFreq+1;
            }
        }
        if(maxFreq < countFreq){
            maxFreq = countFreq;
             mostFrequent = a[i];
        }
    }
    return mostFrequent;
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