// G.F Series
// Siddhant made a special series and named it as G.F Series.
// The series follows this trend  Tn=(Tn-2)2-(Tn-1)  in which the first and the second term 
// are 0 and 1 respectively.
// Help Siddhant to find the first N terms of the series.
#include<iostream>
using namespace std;
int gf(int n){
   if(n==1){
    return 0;
  
   }  
   if(n==2){
    return 1;
   }
    
    int prevGf = gf(n-2)*gf(n-2)-gf(n-1); 
    return prevGf;
}
int main(){
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  cout<<"The GF series is:"<<endl;
  //  cout<<gf(n)<<",";
  for(int i = 1;i<=n;i++){
       cout<<gf(i)<<",";
  }
    return 0; 
}