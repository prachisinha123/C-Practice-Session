// Pattern of Strings
// Given a string S of length N, find the pattern of the strings as shown below in the examples.
#include<iostream>
using namespace std;
string patternString(string s){
    int n = s.size();
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i;j++){
               cout<<s[j];
        }
        cout<<'\n';
          
    }                                                                                                                                 
}
 
int main(){
     string s;
     cout<<"Enter the string:"<<endl;
     cin>>s;
     cout<<"Pattern of the string:"<<endl;
     patternString(s);
     return 0;
}
