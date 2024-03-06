// Generate all the subsequence of the string,using recursion
#include<iostream>
using namespace std;
void subseq(string s,string ans){
    // Base condition:
    if(s.size()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    // ros:rest of the string,
    string ros = s.substr(1); 
    // We are making two call of recursive function:
    subseq(ros,ans);
    subseq(ros,ans+ch);
}  
 
int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    // Output string must be empty,therefore we initialize this output string with empty
    string ans = "";
     subseq(s,ans);
    return 0;
}