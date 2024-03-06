// Reverse a string:
#include<iostream>
using namespace std;
void reverse(string s){
    // Base condition,
    if(s.length()==0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
    // ros:rest of the string
    // It will provide the string after position 1,in the ros;
}
int main(){
   string s;
   cout<<"Enter the string:"<<endl;
   cin>>s;
   cout<<"String after reverse:"<<endl;
   reverse(s);
   return 0;
     
}
