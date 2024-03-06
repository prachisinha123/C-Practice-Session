// Factorial:Calculate the factorial of n numbers 
#include<iostream>
using namespace std;
int fact(int n){
    // base condition
    if(n==0){
        return 1;
    }
    int prevFact = fact(n-1);
    return n*prevFact;
    // return n*fact(n-1);

}
int main(){
    int n;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   cout<<"Factorial of the number:"<<endl;
   cout<<fact(n)<<endl;
    return 0;
}
