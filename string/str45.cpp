// Maximum Occuring Character
// Given a string str. The task is to find the maximum occurring character in the string str. 
// If more than one character occurs the 
// maximum number of time then print the lexicographically smaller character.
#include<iostream>
using namespace std;
 char getMaxOccuringChar(string s){
       for(int i = 0;i<s.size();i++){
         for(int j = 1;j<s.size();j++){
            if(s[i]==s[j])      
         }
         
       }
       
 }

int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"Maximun occuring ch in the string:"<<endl;
    getMaxOccuringChar(s);
    return 0;
}