// Generate all balanced parenthesis,by using recursion
#include<iostream>
#include<string>
using namespace std;
void solve(int open,int close,string  op){
    if(open==0 && close==0){
        cout<<op<<endl;
        return;
    }
    if(open!=0)
    {
        string op1 = op;
        op1.push_back('(');
        solve(open-1,close,op1);
    }
    if(close>open){
        string op2 = op;
        op2.push_back(')');
        solve(open,close-1,op2);
    }
    return;
      
}
int main(){
     int n;
     int close = n;
     int open = n;
     cout<<"Enter the number of parenthesis:"<<endl;
     cin>>n;
    string op = "";
    cout<<"Balanced parenthesis:"<<endl;
     solve(open,close,op);
    return 0;
}