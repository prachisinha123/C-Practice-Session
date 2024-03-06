// Remove all the duplicates from the string:
#include<iostream>
using namespace std;

string removeDup(string s){
    // Base case:if length of string = 0;return empty string,
    if(s.size() == 0){
          return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}
int main(){
  string s;
  cout<<"Enter the string:"<<endl;
  cin>>s;
  cout<<removeDup(s)<<endl;
}