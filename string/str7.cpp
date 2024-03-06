//1) How to convert the lower case into upper case in string .
// For this we must know about ASCII
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str = "adseyediijcncn";
    // cout<<'a'-'A';
    // If we substract 'a'-'A',then we get 32,it means that lowercase is 32 value ahead the uppercase.So we
    // pull the 32 back from a that is;
    // 'a'-'A' = 32
    // 'A' = 'a'-32
    // str.size() provide the length of the string .
    // convert into upper case:
    for(int i = 0;i<str.size();i++)
    { 
        if(str[i] >='a' && str[i]<='z')
          str[i] -= 32;
    }
    cout<<str<<endl;
    // convert into lower case:
    for(int i = 0;i<str.size();i++){
        if(str[i]>='A' && str[i] <= 'z')
          str[i] += 32;
    }
    cout<<str;
   
    return 0;
}