// Reverse a String:Given a String S , print the reverse of the string as output.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string s;
cout<<"Enter the string:"<<endl;
cin>>s;
reverse(s.begin(),s.end());
cout<<"String after reverse:"<<endl;

cout<<s<<endl;

    return 0;
}