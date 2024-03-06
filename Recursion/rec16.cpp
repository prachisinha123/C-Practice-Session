// Move all the 'x' at the end of the string,by using recursion
#include<iostream>
using namespace std;
string moveallX(string s){
    if(s.size()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));
    if(ch =='x'){
        return ans+ch;
    }
    return ch+ans;
    // because we want that 'x' will be added at last;
}
int main(){
  string s;
  cout<<"Enter the string:"<<endl;
  cin>>s;
  cout<<moveallX(s)<<endl;
    return 0;
}