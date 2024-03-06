// Upper case conversion
// Given a string str, convert the first letter of each word in the string to uppercase. 
#include<iostream>
#include<string>
using namespace std;
string transform(string s){
    for(int i = 0;i<s.size();i++){
       if(i==0){
          if(s[i]>='a'&& s[i]<='z')
              s[i] = s[i]-32;         
     }
      else if(s[i] == ' '){
         i++;
        if(s[i]>='a'&& s[i]<='z')
              s[i] = s[i]-32;
       }
}
return s;
}
int main()
{
string s;
cout<<"Enter the string:"<<endl;
getline(cin,s);
cout<<"String after transform:"<<endl;
cout<<transform(s);
    return 0;
}