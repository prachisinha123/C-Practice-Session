//Generate all the subsequent with ASCII numbers:
#include<iostream>
using namespace std;
void subseqASCII(string s,string ans){
       if(s.size()==0){
         cout<<ans<<endl;
         return;
       }
       char ch = s[0];
    //    For Acsii code
    int code = ch;
    string ros = s.substr(1);
    subseqASCII(ros,ans);
    subseqASCII(ros,ans+ch);
    // subseqASCII(ros,ans+code); , here we cann't add code directly in our string,because 'code' is in
    // int,so we have to convert it into 'string'
    subseqASCII(ros,ans+ to_string(code));

    
}
int main(){
    
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    // Output string must be empty,therefore we initialize this output string with empty
    string ans = "";

    subseqASCII(s,ans);

    return 0;
}