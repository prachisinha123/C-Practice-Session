// /Fibonacci series
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int prevFib = fib(n-1)+fib(n-2);
    return prevFib;
    // return fib(n-1)+fib(n-2);
}
int main(){
   int n;
   cout<<"Enter the value of position:"<<endl;
   cin>>n;
   cout<<fib(n)<<endl;
   return 0;

   

}