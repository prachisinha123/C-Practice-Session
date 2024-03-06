// Generate all balanced parenthesis,by using recursion,through vector function:
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string> &v,int open,int close,string op)
{
    if(open==0&& close==0){
         v.push_back(op);
         return;
    }
    if(open!=0){
        string op1 = op;
        op1.push_back('(');
        solve(v,open-1,close,op1);
    }
    if(close>open){
        string op2 = op;
        op2.push_back(')');
        solve(v,open,close-1,op2);
    }
}
int main(){
    vector<string> v;
    string op = "";
    int n;
    int close = n;
    int open = n;
    cout<<"Enter the no of parenthesis:"<<endl;
    cin>>n;
    cout<<"Balanced Parenthesis:"<<endl;
    solve(v,open,close,op);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}