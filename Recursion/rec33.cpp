// Fabionacci series:
#include<iostream>
#include<vector>
using namespace std;
void fib(vector<string> &v,int n,string op){
      if(n==0){
        v.push_back(0);
        return;
      } 
       if(n==1){
        v.push_back(1);
        return;
       }
       int prevFib = fib(n-1)+fib(n-2);
       v.push_back(prevFib);
       return;
}
int main(){
   int n;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   int a[n];
   vector<string>v;
   cout<<"Fibonacci number:"<<endl;
   fib(v,n,a);
   for(int i = 0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
   return 0;
}