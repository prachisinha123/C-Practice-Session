// Reversing the vowels:
// Given a string consisting of lowercase english alphabets, reverse only the vowels present in it and print the resulting string.
// A better solution is to use two pointers scanning from begining and end
#include<iostream>
#include<string>
using namespace std;
//Utility function to check for vowel,function name is bool,because it return true or false.
bool isVowel(char c){
    if(c=='a'|| c=='e'|| c=='i' || c=='o'|| c=='u'
    ||c=='A'|| c=='E'|| c=='I'||c=='O'|| c=='U'){
        return true;
    }
    return false;
}
string reverseVowel(string s){
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        if(!isVowel(s[i]))
        // to check whether s[i] is not a vowel (!) not isVowel
        {
            i++;
            // continue;
        }
        else if(!isVowel(s[j]))
        {
            j--;
            // continue;
        }
        else{
        // Swapping:
        int temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
        }
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