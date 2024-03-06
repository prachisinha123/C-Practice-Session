// Remove characters from alphanumeric string
// Remove all characters except the numeric characters from an alphanumeric string.
#include<iostream>
using namespace std;
	string removeCharacters(string s){
        for(int i = 0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a'&& s[i]<='z'){
                s[i] = '\0';
            }
        }
        return s;
    } 
int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"After removal of alphanumeric characters:"<<endl;
    cout<<removeCharacters(s);
    return 0;
}