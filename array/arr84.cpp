//29)Find longest consecutive subsequence,to reduce the time complexity , we use in-built sort function
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void findLongestConseqSubseq(int a[], int n){
     sort(a,a+n);
     for(int i = 0;i<n;i++){
        cout<<a[i]<<""<<endl;
    } 
    int longest = 1;
    int count = 0;
    int lastSmaller =INT_MIN;
    for(int i = 0;i<n;i++){
        if((a[i]-1) == lastSmaller){
         count = count+1;
          lastSmaller = a[i];
       }
    // if this 'if' is not working , means a[i]==lastSmaller, then nothing,we will not do anything 
    // but when a[i] != lastSmaller, then
        else if(a[i]!= lastSmaller){
        count = 1;
        lastSmaller = a[i];
       }
    longest = max(longest,count);
}
cout<<"Length of the Longest contiguous subsequence is:";
cout<<longest<<endl;
}
int main(){
   int n;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   cout<<"Enter the elements present in the array:"<<endl;
   int a[n];
   for(int i  = 0;i<n;i++){
     cin>>a[i];
   }
  findLongestConseqSubseq(a,n);

    return 0;
}