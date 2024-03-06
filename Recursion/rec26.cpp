// Letter case permutation with digits.using recursion:
#include<iostream>
#include<string>
using namespace std;
void solve(string ip,string op){
    if(ip.size()==0){
        cout<<op<<endl;
        return ;
    }
    // If the input string is alphabet
   if(isalpha(ip[0])){
    string op1 = op;
    string op2 = op;
    op1.push_back(tolower(ip[0]));
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
   } 
//    if the input string is not an alphabet,it is a digit number,
   else{
    string op1 = op;
    op1.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
   } 
   return;
}
int main(){
  string ip;
  cout<<"Enter the output string:"<<endl;
  cin>>ip;
//   Initialize the output string with empty string
  string op =""; 
  cout<<"Permutation of the given string:"<<endl;
  solve(ip,op);
  return 0;
}