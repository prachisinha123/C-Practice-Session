// Remove vowels from string
// Given a string, remove the vowels from the string.
#include<iostream>
using namespace std;
bool isVowel(char c){
    if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u'){
        return true;
}
return false;
}
string removeVowel(string s){
    for(int i=0;i<s.size();i++){
        if(isVowel(s[i])){
            s[i] = '\0';
        }
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"String after removal of vowel:"<<endl;
    cout<<removeVowel(s);
    return 0;
}