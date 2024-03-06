// Program to print reciprocal of letters : This will print small and capital alphabets, other charcter
// and spaces also  CORRECT SOLUTION
#include<iostream>
#include<string>
using namespace std;
string reciprocalString(string s)
{
    for(int i = 0;i<s.size();i++){
        if(s[i]>='a'&& s[i] <='z')
        {
            s[i] = 'z'-s[i]+'a';   
        }
        else if(s[i]>='A'&& s[i]<='Z')
        {
              s[i] = 'Z'-s[i]+'A';  
        }
       
    }
    return s;
    }
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    getline(cin,s);
    cout<<"String after reverse:"<<endl;
    cout<<reciprocalString(s);
    return 0;
}


