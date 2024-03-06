// /Fibonacci series:Print the fibonacci series till the given value;
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
   
   cout<<"Enter the value of position till where we want to print:"<<endl;
   cin>>n;
   cout<<"Fibonacci number till "<<n<<endl;
   for(int i = 0;i<=n;i++){
      cout<<fib(i)<<",";
   }
   return 0;

   

}