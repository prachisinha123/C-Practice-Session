// Extract the integers
// Given a string s, extract all the integers from s.
#include<iostream>
using namespace std;
 string extractIntegerWords(string s){
     string ans;
     for(int i = 0;i<s.size();i++){
        if(s[i]>='1'&& s[i]<='9'){
            ans = ans+s[i] ;  
            cout<<ans<<"  "; 
        } 
     }
     
//   return ans;
 }

int main(){
string s;
cout<<"Enter the string:"<<endl;
cin>>s;
cout<<"Integers present in the string:"<<endl;
// cout<<extractIntegerWords(s);
extractIntegerWords(s);
   
    return 0;
}