// Print N digit binary number , where (no of 1's) > (no of 0's) in all its prefixes
#include<iostream>
using namespace std;
void solve( int one,int zero,int n,string op){
    if(n==0){
        cout<<op<<"";
        return ;
    }
    // choices for 1:always
    string op1 = op;
    op1.push_back('1');
    solve(one+1,zero,n-1,op1);
    // choices for 0:
    if(one>zero){
        string op2 = op;
        op2.push_back('0');
        solve(one,zero+1,n-1,op2);
    }
    return;
    
}
int main(){
   int n;
   int zero = 0;
   int one = 0;
   cout<<"Enter the value of n:"<<endl;
   cin>>n; 
   string op = " ";
   cout<<"Binary Number:"<<endl;
   solve(one,zero,n,op);
   return 0;
}
