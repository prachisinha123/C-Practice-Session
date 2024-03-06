// Java Substring
// Given a string S and two integers L and R. Print the characters in the range L to R of the string.
#include<iostream>
using namespace std;
//  string javaSub(string s,int l, int r) {
//     if(l>=0  && r<s.size()){
//         for(int i = l;i<=r;i++){
//             cout<<s[i];
//     }
    
//     }
    
//  }
string javaSub(string s,int l, int r){
    string res;
    int j = 0;
    if(l>=0 && r<s.size()){
        for(int i = l;i<=r;i++){
           res=res+s[i];
           
        }
    }
    return res;
}
int main(){
    string s; 
    int l,r;
    cout<<"Enter the string:"<<endl;
    cin>>s;
   
    cout<<"Value of l:"<<endl;
    cin>>l;
    cout<<"Value of r:"<<endl;
  
    cin>>r;
    cout<<"Substring between the given range:"<<endl;
     cout<<javaSub(s,l,r);

    return 0;
}