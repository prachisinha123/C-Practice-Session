// Subsets:
// Given a set of positive integers, find all its subsets.
#include<iostream>
#include<string>
using namespace std;
void solve(string ip,string op){
    if(ip.size()==0){
        cout<<op<<" ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
    return;
}
int main(){
  string ip;
   cout<<"Enter the input string:"<<endl;
   cin>>ip;
   string op = "";
   cout<<"Subsets of the string:"<<endl;
   cout<<solve(ip,op);
return 0;
}