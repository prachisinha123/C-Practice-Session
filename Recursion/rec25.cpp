// Permutation with case changes
#include<iostream>
#include<string>
using namespace std;
void solve(string ip,string op){
    if(ip.size()==0){
        cout<<op<<endl;
        return ;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
    return;
}
int main(){
string ip;
cout<<"Enter the input string:"<<endl;
cin>>ip;
string op ="";
cout<<"Permutation with spaces:"<<endl;
solve(ip,op);
return 0;
     
}