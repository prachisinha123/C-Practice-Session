// C++ Strings
// Given two strings  S1 and S2 . You have to concatenate both the strings and print the concatenated string.
#include<iostream>
using namespace std;

string conCat(string s1 , string s2)
{
    s1.append(s2);
    return s1;   
}
int main(){
    string s1,s2;
cout<<"Enter the first string:"<<endl;
cin>>s1;
cout<<"Enter the second string:"<<endl;
cin>>s2;
cout<<"Enter the string after concatenation:"<<endl;

cout<<conCat( s1,s2);
    return 0;
} 