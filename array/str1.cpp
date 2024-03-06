// How to input and output the string
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//   string str;
//   cout<<"The string we need:"<<endl;
//    cin >> str;
//    cout<<"The declared string is:"<<endl;
//    cout << str;
    


//     return 0;
// }

// Different ways to declare the string:
#include<iostream>
using namespace std;
int main(){
//   string str;
//   string str1(5,'n');
//   cout<< str1 <<endl;
// Input without spaces:
//  string str = "PrachiSinha";
//  cout<< str;
// Input with spaces:
string str;
// by using getline we get the whole string as our output.
getline(cin,str);
cout<< str <<endl;
    return 0;
}