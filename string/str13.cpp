// Recerse string: Making the reverse function()
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int n = s.size();
    int temp;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    for(int i = 0;i<n/2;i++){
         temp = s[i];
         s[i] = s[n-1-i];
         s[n-1-i] = temp;
    }
     cout<<"String after reverse:"<<endl;
     cout<<s;
     return 0;
}




