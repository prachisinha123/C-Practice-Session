// Check String:
// Given a string, check if all its characters are the same or not.
#include<iostream>
using namespace std;
bool check(string s){
    for(int i = 1 ;i<s.size();i++)
        if(s[i] != s[0])
        return false;

    return true;
    
    }

int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"After checking:"<<endl; str33
    cout<<check(s);
    return 0;
}