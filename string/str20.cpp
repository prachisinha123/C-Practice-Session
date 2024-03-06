// Program to print reciprocal of letters : It will print numbers also, along with alphabets(capital,small)

#include<iostream>
#include<string>
using namespace std;
string reciprocalString(string s){
    char ch;
    for(int i = 0;i<s.size();i++){
        if(s[i]>='a'&& s[i] <='z')
        {
            // s[i] = 'z'-s[i]+'a';
            ch = 'z'-s[i]+'a';
            cout<<ch;
            
        }
        else if(s[i]>='A'&& s[i]<='Z')
        {
            //   s[i] = 'Z'-s[i]+'A';
             ch = 'Z'-s[i]+'A';
             cout<<ch;
            
        }
        else{
            cout<<s[i];
        }
    }

    
}
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"String after reverse:"<<endl;
    reciprocalString(s);
    return 0;
}


