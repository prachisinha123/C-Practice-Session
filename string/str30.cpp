// Count of camel case characters 
// Given a string. Count the number of Camel Case characters in it.
#include<iostream>
using namespace std;
  int countCamelCase (string s){
    int count = 0;  
    for(int i = 0;i<s.size();i++){
        if(s[i]>='A' && s[i] <='Z')
            count++;           
    }   
      return count;  
  }
int main(){
string s; 
cout<<"Enter the string:"<<endl;
cin>>s;
cout<<"Total number of camel case character:"<<endl;
cout<<countCamelCase(s);
    return 0;
}