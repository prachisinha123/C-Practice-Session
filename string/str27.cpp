// Remove Spaces:
// Given a string, remove spaces from it. 
#include<iostream>
#include<string>
using namespace std;
string removeSpace(string s){
    string ans;
     for(int i = 0; i<s.size(); i++){
         if(s[i] != ' ')
             ans = ans+s[i]; 
     }
     return ans;
  }
     int main(){
     string s;
     cout<<"Enter the string:"<<endl;
     getline(cin,s); 
     cout<<"String after removing the spaces:"<<endl;  
     cout<<removeSpace(s);
     return 0;
}