// Delete alternate characters
// Given a string S as input. Delete the characters at odd indices of the string.
#include<iostream>
using namespace std;
string delAlternate(string s) {
        for(int i = 0;i<s.size();i++){
            if(i%2 != 0){
                s[i] = '\0';
            }

        }
        return s;
    }
int main(){
  string s;
  cout<<"Enter the string:"<<endl;
  cin>>s;
  cout<<delAlternate(s);
  

    return 0;

}