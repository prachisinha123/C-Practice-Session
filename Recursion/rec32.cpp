// Print N digit binary number , where (no of 1's) > (no of 0's) in all its prefixes,using vector function
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string> &v,int one,int zero,int n,string op){
    if(n==0){
    v.push_back(op);
    return;
    }
    string op1 = op;
    op1.push_back('1');
    solve(v,one+1,zero,n-1,op1);
    if(one>zero){
        string op2 = op;
        op2.push_back('0');
        solve(v,one,zero+1,n-1,op2); 
    }
    return;
}
int main(){
    int n;
    int zero = 0;
    int one = 0;
    vector<string>v;
    string op = "";
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Binary number:"<<endl;
    solve(v,one,zero,n,op);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}