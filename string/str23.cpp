// Check for Binary
// Given a non-empty sequence of characters str, return true if sequence is Binary, else return false
#include<iostream>
using namespace std;
bool isBinary(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]!= '0' && s[i]!= '1'){
       return false;
        }   
    return true; 
    }
}
// OR:
// bool isBinary(string str)
// {
//    for (int i=0; i<str.length(); i++)
//       if (str[i] != '0' && str[i] != '1')
//          return false;
//     return true;
// }

    

int main(){
   string s;
   cout<<"Enter the string:"<<endl;
   cin>>s;
   cout<<isBinary(s);
    return 0;
}
