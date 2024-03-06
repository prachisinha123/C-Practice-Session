// Calculate n raised to power of p,using recursion:
#include<iostream>
using namespace std;
int power(int n,int p){
    // base condition
    if(p==0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
}
 

int main(){
    int n,p;
   cout<<"Enter the number n:"<<endl;
   cin>>n;
   cout<<"Enter the value of p:"<<endl;
   cin>>p;
   cout<< power(n,p);
    return 0;
}