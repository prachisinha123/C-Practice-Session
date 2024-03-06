// Triangle shrinking downwards:
// Given a string of a constant length, print a triangle out of it. The triangle should start with the given string and keeps shrinking downwards by removing one
//  character from the begining of the string. The spaces on the left side of the triangle should
//   be replaced with dot character.
#include<iostream>
using namespace std;
string triDownwards(string s){
    string ans;
    for(int i = 0;i<s.size();i++){
        for(int j = 0;j<s.size();j++){
            if(j<i)
              ans = ans+'.';
              else
              ans = ans+s[j];
              
        }
    
    }
     return ans;
}
int main()
 {
   string s;

   cout<<"Enter the string:"<<endl;
   cin>>s;
   cout<<"Pattern of the string:"<<endl;
    cout<<triDownwards(s)<<endl;
    
    
    
   
   return 0;
}


 