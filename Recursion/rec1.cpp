// Sum:Add all numbers till 'n'
#include<iostream>
using namespace std;
int Sum(int n){
    // base condition
    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return n + prevSum;
}
int main(){
   int n;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   cout<<"Sum:"<<endl;
   cout<<Sum(n)<<endl;
     
   return 0;
}