// Remove Spaces
// Given a string, remove spaces from it.
#include<iostream>
#include<string>

using namespace std;
 string modify (string s){
     for(int i = 0;i<s.size();i++){
         if(s[i]== ' '){
            s[i]=s[i+1];
            s[i+1] = '\0';
         }
     }
     return s;
 }
int main(){
    string s ;
    cout<<"Enter the string:"<<endl;
    getline(cin,s);
    cout<<modify (s);
    return 0;
}