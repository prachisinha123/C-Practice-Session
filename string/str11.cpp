// 3)In a string,we have to print that character which occur maximum time:
// Basic concept: we hve to keep the count the occurrence of the character array
// We take an array of 26 size,because we have 26 characters,and find the count of every character
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // At first take a string
    string s = "babcdfgfhfgg";    
    // Then take an array
    int freq[26];
    for(int i = 0;i<26;i++){
        freq[i] = 0;
    }
    for(int i = 0;i<s.size();i++){
            freq[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for(int i = 0;i<26;i++){
        if(freq[i] > maxF){
            maxF = freq[i];
            ans = i +'a';
        }
    }
    cout << maxF <<"" <<ans <<endl;
 
    return 0;
}