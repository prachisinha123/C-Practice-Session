// 29)Find longest consecutive subsequence
// Brute Approach:
#include<iostream>
using namespace std;
int findLongestConseqSubseq(int a[], int n){
    int longest = 1;
    for(int i = 0;i<n;i++){
         int x = a[i];
         int count = 1;
          for(int j = 0;j<n;j++){
           if(a[j]==x+1){
              x = x+1;
             count = count+1;
           }  
         }
     longest = max(count,longest);  
    }
    return longest;
}
int main(){
    int n;
     cout<<"Enter the value of n:"<<endl;
     cin>>n;
     int a[n];
     cout<<"Enter the elements present in the array:"<<endl;
     for(int i = 0;i<n ;i++){
        cin>>a[i];
     }
     cout<<findLongestConseqSubseq( a, n);
    return 0;
}
