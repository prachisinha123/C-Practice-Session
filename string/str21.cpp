// Program to print reciprocal of letters:
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 string reciprocalString(string s)
    {
        string reciprocal;
        char ch;
        for (int i = 0; i < s.size(); i++)
        {
            // converting uppercase character
            // To reciprocal character
            if (isupper(s[i]))
            {
                ch = 'Z' - s[i] + 'A';
                reciprocal.push_back(ch);
            }
    
            // converting lowercase character
            // To reciprocal character
            else if (islower(s[i]))
            {
                ch = 'z' - s[i] + 'a';
                reciprocal.push_back(ch);
            }
    
            else
            {
                reciprocal.push_back(s[i]);
            }
        }
        return reciprocal;
    }
  int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"String after reverse:"<<endl;
    cout<<reciprocalString(s);
    return 0;
}
  