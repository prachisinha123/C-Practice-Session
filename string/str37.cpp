// Front-Back Transformation - copy
// Given a string S, consisting only of english alphabets, replace all the alphabets with the 
// alphabets occuring at the same position when counted in reverse order of alphabets. For example,
//  'a' would be replaced by 'z', 'b' by 'y', 'c' by 'x' and so on. Any capital letters would be 
//  replaced by capital letters only.
#include<iostream>
using namespace std;
string convert(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = 'Z'-s[i] + 'A';
        }
        else if(s[i]>='a'&& s[i]<='z'){
            s[i] = 'z'-s[i] +'a';

        }
    }
        return s;
}
int main(){                                                                    
    string s;
     cout<<"Enter the sting:"<<endl;
     cin>>s;
     cout<<"After conversion:"<<endl;
     cout<<convert(s);
    return 0;
}
 