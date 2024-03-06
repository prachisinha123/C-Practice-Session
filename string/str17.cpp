// Reversing the vowels:
// Given a string consisting of lowercase english alphabets, reverse only the vowels present in it and print the resulting string.
// Simple solution:Our simple solution is to store all the vowels while scanning the string and placing the 
// vowels in the reverse order in another iteration of string.
#include<iostream>
#include<string>
using namespace std;
//Utility function to check for vowel,function name is bool,because it return true or false.
bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u'){
        return true;
    }
    return false;
}
string reverseVowel(string s){
    int j = 0;
    // Storing the vowels separately,so we make a string named "vowel" .
    string vowel;
    for(int i = 0; i<s.size();i++){
        if(isVowel(s[i]))
         vowel[j++] = s[i];

         
    }
    // Placing the vowels in the reverse order in the string .
    for(int i = 0;i<s.size();i++){
        if(isVowel(s[i]))
        s[i] = vowel[--j];    
                                                                              
    }
    return s;

}      
int main(){
 string s;
 cout<<"Enter the string:"<<endl; 
 cin>>s;
 cout<<"String after the reverse of vowels:"<<endl;
 cout<<reverseVowel(s);
    return 0;
}