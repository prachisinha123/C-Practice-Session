// Different function of the string:clear(),empty(),compare() functions
#include<iostream>
#include<string>
using namespace std;
int main()
 {
// 3.Clear string:clear()function will clear out all the string
string ac = "sdbhduhijdoedkojkd hfhfuhf hjhfj";
ac.clear(); 
cout<<ac<<endl;  
// 4.Comparing of two string:
string s1 = "abc";
string s2 = "abc ";
// cout<< s2.compare(s1) <<endl;
if(!s1.compare(s2) == 0)
cout<<"String are equals"<<endl;
// Empty functions:To check whether the string is empty or not
string s = "abc"; 
cout<<s<<endl;
s.clear();
if(s.empty())
cout<<"String is empty"<<endl;

    return 0;  
}